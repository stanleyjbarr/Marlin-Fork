/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * DWIN by Creality3D
 */

#include "dwin_lcd.h"
#include "../common/encoder.h"
#include "../../../libs/BL24CXX.h"

#include "../../../inc/MarlinConfigPre.h"

enum processID : uint8_t {
  // Process ID
  ID_MainMenu,
  ID_SelectFile,
  ID_Prepare,
  ID_Control,
  ID_Leveling,
  ID_PrintProcess,
  ID_AxisMove,
  ID_TemperatureID,
  ID_Motion,
  ID_Info,
  ID_Tune,
  #if HAS_PREHEAT
    ID_PLAPreheat,
    #if PREHEAT_COUNT > 1
      ID_ABSPreheat,
    #endif
  #endif
  ID_MaxSpeed, ID_MaxSpeedValue,
  ID_MaxAcceleration, ID_MaxAccelerationValue,
  ID_MaxJerk, ID_MaxJerkValue,
  ID_Step, ID_StepValue,
  ID_HomeOff, ID_HomeOffX, ID_HomeOffY, ID_HomeOffZ,

  // Last Process ID
  ID_LastPrepare,

  // Advance Settings
  ID_AdvSet,
  ID_ProbeOff, ID_ProbeOffX, ID_ProbeOffY,

  // Back Process ID
  ID_BackMain, ID_BackPrint,

  // Date variable ID
  ID_MoveX, ID_MoveY, ID_MoveZ,
  #if HAS_HOTEND
    ID_Extruder,
    ID_ETemp,
  #endif
  ID_HomeOffset,
  #if HAS_HEATED_BED
    ID_BedTemp,
  #endif
  #if HAS_FAN
    ID_FanSpeed,
  #endif
  ID_PrintSpeed,

  // Window ID
  ID_PrintWindow, ID_PopupWindow
};

extern uint8_t checkkey;
extern float zprobe_zoffset;
extern char print_filename[16];

extern millis_t dwin_heat_time;

typedef struct {
  #if HAS_HOTEND
    celsius_t tempE = 0;
  #endif
  #if HAS_HEATED_BED
    celsius_t tempBed = 0;
  #endif
  #if HAS_FAN
    int16_t fanSpeed = 0;
  #endif
  int16_t printSpeed    = 100;
  float maxFeedSpeed    = 0;
  float maxAcceleration = 0;
  float maxJerkScaled   = 0;
  float maxStepScaled   = 0;
  float offset_value    = 0;
  int8_t show_mode      = 0; // -1: Temperature control    0: Printing temperature
  struct {
    #if HAS_X_AXIS
      float x = 0;
    #endif
    #if HAS_Y_AXIS
      float y = 0;
    #endif
    #if HAS_Z_AXIS
      float z = 0;
    #endif
    #if HAS_HOTEND
      float e = 0;
    #endif
  } moveScaled;
  struct {
    #if HAS_X_AXIS
      float x = 0;
    #endif
    #if HAS_Y_AXIS
      float y = 0;
    #endif
    #if HAS_Z_AXIS
      float z = 0;
    #endif
  } homeOffsScaled;
  struct {
    #if HAS_X_AXIS
      float x = 0;
    #endif
    #if HAS_Y_AXIS
      float y = 0;
    #endif
  } probeOffsScaled;
} hmi_value_t;

#define DWIN_CHINESE 123
#define DWIN_ENGLISH 0

typedef struct {
  uint8_t language;
  bool pause_flag:1;    // printing is paused
  bool pause_action:1;  // flag a pause action
  bool print_finish:1;  // print was finished
  bool select_flag:1;   // Popup button selected
  bool home_flag:1;     // homing in course
  bool heat_flag:1;     // 0: heating done  1: during heating
  bool done_confirm_flag:1;
  #if ENABLED(PREVENT_COLD_EXTRUSION)
    bool cold_flag:1;
  #endif
  AxisEnum feedspeed_axis, acc_axis, jerk_axis, step_axis;
} HMI_flag_t;

extern HMI_value_t HMI_ValueStruct;
extern HMI_flag_t HMI_flag;

#if HAS_HOTEND || HAS_HEATED_BED
  // Popup message window
  void DWIN_Popup_Temperature(const bool toohigh);
#endif

#if HAS_HOTEND
  void Popup_Window_ETempTooLow();
#endif

void Popup_Window_Resume();
void Popup_Window_Home(const bool parking=false);
void Popup_Window_Leveling();

void Goto_PrintProcess();
void Goto_MainMenu();

// Variable control
void HMI_Move_X();
void HMI_Move_Y();
void HMI_Move_Z();
void HMI_Move_E();

void HMI_Zoffset();

#if HAS_HOTEND
  void HMI_ETemp();
#endif
#if HAS_HEATED_BED
  void HMI_BedTemp();
#endif
#if HAS_FAN
  void HMI_FanSpeed();
#endif

void HMI_PrintSpeed();

void HMI_MaxFeedspeedXYZE();
void HMI_MaxAccelerationXYZE();
void HMI_MaxJerkXYZE();
void HMI_StepXYZE();
void HMI_SetLanguageCache();

void updateVariable();
void dwinDrawSignedFloat(uint8_t size, uint16_t bColor, uint8_t iNum, uint8_t fNum, uint16_t x, uint16_t y, long value);

// SD Card
void HMI_SDCardInit();
void HMI_SDCardUpdate();

// Other
void Draw_Status_Area(const bool with_update); // Status Area
void HMI_StartFrame(const bool with_update);   // Prepare the menu view
void HMI_MainMenu();    // Main process screen
void HMI_SelectFile();  // File page
void HMI_Printing();    // Print page
void HMI_Prepare();     // Prepare page
void HMI_Control();     // Control page
void HMI_Leveling();    // Level the page
void HMI_AxisMove();    // Axis movement menu
void HMI_Temperature(); // Temperature menu
void HMI_Motion();      // Sports menu
void HMI_Info();        // Information menu
void HMI_Tune();        // Adjust the menu

#if HAS_PREHEAT
  void HMI_PLAPreheatSetting(); // PLA warm-up setting
  void HMI_ABSPreheatSetting(); // ABS warm-up setting
#endif

void HMI_MaxSpeed();        // Maximum speed submenu
void HMI_MaxAcceleration(); // Maximum acceleration submenu
void HMI_MaxJerk();         // Maximum jerk speed submenu
void HMI_Step();            // Transmission ratio

void HMI_Init();
void DWIN_InitScreen();
void DWIN_Update();
void EachMomentUpdate();
void DWIN_HandleScreen();
void DWIN_StatusChanged(const char * const cstr=nullptr);
void DWIN_StatusChanged(FSTR_P const fstr);

inline void DWIN_HomingStart() { HMI_flag.home_flag = true; }

void DWIN_HomingDone();
void DWIN_LevelingDone();

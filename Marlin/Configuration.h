#define AUTO_BED_LEVELING_BILINEAR     // Added by config.ini
#define BANG_MAX 255                   // Added by config.ini
#define BAUDRATE 115200                // Added by config.ini
#define BED_MAXTEMP 120                // Added by config.ini
#define BED_MINTEMP 0                  // Added by config.ini
#define BED_OVERSHOOT 10               // Added by config.ini
#define BED_TRAMMING_HEIGHT 0.0        // Added by config.ini
#define BED_TRAMMING_INSET_LFRB { 30, 30, 30, 30 } // Added by config.ini
#define BED_TRAMMING_LEVELING_ORDER { LF, RF, RB, LB } // Added by config.ini
#define BED_TRAMMING_Z_HOP 4.0         // Added by config.ini
#define BLTOUCH                        // Added by config.ini
#define BUSY_WHILE_HEATING             // Added by config.ini
#define CLASSIC_JERK                   // Added by config.ini
#define CONFIG_EXAMPLES_DIR "Creality/Ender-3 V2/BigTreeTech SKR Mini E3 v3/MarlinUI" // Added by config.ini
#define COOLER_OVERSHOOT 2             // Added by config.ini
#define CR10_STOCKDISPLAY              // Added by config.ini
#define CUSTOM_MACHINE_NAME "Dr. SJB's Ender3 PRO " // Added by config.ini
#define CUSTOM_STATUS_SCREEN_IMAGE     // Added by config.ini
#define DEFAULT_ACCELERATION 500       // Added by config.ini
#define DEFAULT_AXIS_STEPS_PER_UNIT { 80, 80, 400, 93 } // Added by config.ini
#define DEFAULT_EJERK 5.0              // Added by config.ini
#define DEFAULT_KEEPALIVE_INTERVAL 2   // Added by config.ini
#define DEFAULT_LEVELING_FADE_HEIGHT 10.0 // Added by config.ini
#define DEFAULT_MAX_ACCELERATION { 500, 500, 100, 1000 } // Added by config.ini
#define DEFAULT_MAX_FEEDRATE { 200, 200, 20, 25 } // Added by config.ini
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75 // Added by config.ini
#define DEFAULT_RETRACT_ACCELERATION 500 // Added by config.ini
#define DEFAULT_TRAVEL_ACCELERATION 1000 // Added by config.ini
#define DEFAULT_XJERK 10.0             // Added by config.ini
#define DEFAULT_YJERK 10.0             // Added by config.ini
#define DEFAULT_ZJERK 0.3              // Added by config.ini
#define DEFAULT_BEDKD 624.59           // Added by config.ini
#define DEFAULT_BEDKI 85.47            // Added by config.ini
#define DEFAULT_BEDKP 462.10           // Added by config.ini
#define DISABLE_E false                // Added by config.ini
#define DISABLE_OTHER_EXTRUDERS        // Added by config.ini
#define DISABLE_X false                // Added by config.ini
#define DISABLE_Y false                // Added by config.ini
#define DISABLE_Z false                // Added by config.ini
#define DISPLAY_CHARSET_HD44780 JAPANESE // Added by config.ini
#define DUMMY_THERMISTOR_998_VALUE 25  // Added by config.ini
#define DUMMY_THERMISTOR_999_VALUE 100 // Added by config.ini
#define E0_DRIVER_TYPE A4988         // Added by config.ini
#define EEPROM_AUTO_INIT               // Added by config.ini
#define EEPROM_CHITCHAT                // Added by config.ini
#define EEPROM_SETTINGS                // Added by config.ini
#define ENABLE_LEVELING_AFTER_G28      // Added by config.ini
#define ENABLE_LEVELING_FADE_HEIGHT    // Added by config.ini
#define ENCODER_PULSES_PER_STEP 4      // Added by config.ini
#define ENCODER_STEPS_PER_MENU_ITEM 1  // Added by config.ini
#define ENDSTOPPULLUPS                 // Added by config.ini
#define ENDSTOP_INTERRUPTS_FEATURE     // Added by config.ini
#define EXTRAPOLATE_BEYOND_GRID        // Added by config.ini
#define EXTRUDERS 1                    // Added by config.ini
#define EXTRUDE_MAXLENGTH 1000         // Added by config.ini
#define EXTRUDE_MINTEMP 180            // Added by config.ini
#define E_ENABLE_ON 0                  // Added by config.ini
#define FAN_SOFT_PWM                   // Added by config.ini
#define FILAMENT_HEAT_CAPACITY_PERMM { 5.6e-3f } // Added by config.ini
#define GRID_MAX_POINTS_X 7            // Added by config.ini
#define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X // Added by config.ini
#define HEATER_0_MAXTEMP 275           // Added by config.ini
#define HEATER_0_MINTEMP 0             // Added by config.ini
#define HOMING_FEEDRATE_MM_M { (70*60), (70*60), (10*60) } // Added by config.ini
#define HOST_KEEPALIVE_FEATURE         // Added by config.ini
#define HOTEND_OVERSHOOT 15            // Added by config.ini
#define INVERT_E0_DIR true             // Added by config.ini
#define INVERT_X_DIR true              // Added by config.ini
#define INVERT_Y_DIR true              // Added by config.ini
#define INVERT_Z_DIR false             // Added by config.ini
#define LCD_BED_LEVELING               // Added by config.ini
#define LCD_BED_TRAMMING               // Added by config.ini
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS 2 // Added by config.ini
#define LCD_FEEDBACK_FREQUENCY_HZ 5000 // Added by config.ini
#define LCD_INFO_SCREEN_STYLE 0        // Added by config.ini
#define LCD_LANGUAGE en                // Added by config.ini
#define LCD_PROBE_Z_RANGE 4            // Added by config.ini
#define LEVELED_SEGMENT_LENGTH 5.0     // Added by config.ini
#define LEVELING_BED_TEMP 50           // Added by config.ini
#define LEVELING_NOZZLE_TEMP 120       // Added by config.ini
#define MAX_BED_POWER 255              // Added by config.ini
#define MAX_CHAMBER_POWER 255          // Added by config.ini
#define MAX_SOFTWARE_ENDSTOPS          // Added by config.ini
#define MAX_SOFTWARE_ENDSTOP_X         // Added by config.ini
#define MAX_SOFTWARE_ENDSTOP_Y         // Added by config.ini
#define MAX_SOFTWARE_ENDSTOP_Z         // Added by config.ini
#define MESH_EDIT_Z_STEP 0.025         // Added by config.ini
#define MESH_INSET 0                   // Added by config.ini
#define MIN_SOFTWARE_ENDSTOPS          // Added by config.ini
#define MIN_SOFTWARE_ENDSTOP_X         // Added by config.ini
#define MIN_SOFTWARE_ENDSTOP_Y         // Added by config.ini
#define MIN_SOFTWARE_ENDSTOP_Z         // Added by config.ini
#define MOTHERBOARD LINUX_RAMPS        // Added by config.ini
#define MPCTEMP                        // Added by config.ini
#define MPC_AMBIENT_XFER_COEFF { 0.1173f } // Added by config.ini
#define MPC_AMBIENT_XFER_COEFF_FAN255 { 0.1247f } // Added by config.ini
#define MPC_AUTOTUNE_MENU              // Added by config.ini
#define MPC_BLOCK_HEAT_CAPACITY { 13.33f } // Added by config.ini
#define MPC_EDIT_MENU                  // Added by config.ini
#define MPC_HEATER_POWER { 40.0f }     // Added by config.ini
#define MPC_INCLUDE_FAN                // Added by config.ini
#define MPC_MAX BANG_MAX               // Added by config.ini
#define MPC_MIN_AMBIENT_CHANGE 1.0f    // Added by config.ini
#define MPC_SENSOR_RESPONSIVENESS { 0.3763f } // Added by config.ini
#define MPC_SMOOTHING_FACTOR 0.5f      // Added by config.ini
#define MPC_STEADYSTATE 0.5f           // Added by config.ini
#define MPC_TUNING_END_Z 10.0f         // Added by config.ini
#define MPC_TUNING_POS { X_CENTER, Y_CENTER, 1.0f } // Added by config.ini
#define NEOPIXEL_BRIGHTNESS 127        // Added by config.ini
#define NEOPIXEL_IS_SEQUENTIAL         // Added by config.ini
//#define NEOPIXEL_LED                   // Added by config.ini
#define NEOPIXEL_PIN 71               // Added by config.ini
#define NEOPIXEL_PIXELS 22             // Added by config.ini
#define NEOPIXEL_STARTUP_TEST          // Added by config.ini
#define NEOPIXEL_TYPE NEO_GRB          // Added by config.ini
#define NOZZLE_PARK_FEATURE            // Added by config.ini
#define NOZZLE_PARK_MOVE 0             // Added by config.ini
#define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 } // Added by config.ini
#define NOZZLE_PARK_XY_FEEDRATE 100    // Added by config.ini
#define NOZZLE_PARK_Z_FEEDRATE 5       // Added by config.ini
#define NOZZLE_PARK_Z_RAISE_MIN 2      // Added by config.ini
#define NOZZLE_TO_PROBE_OFFSET { -40, -10, -1.85 } // Added by config.ini
#define NO_CONTROLLER_CUSTOM_WIRING_WARNING // Added by config.ini
#define PID_FUNCTIONAL_RANGE 10        // Added by config.ini
#define PID_K1 0.95                    // Added by config.ini
#define PID_MAX BANG_MAX               // Added by config.ini
#define PREHEAT_1_FAN_SPEED 255        // Added by config.ini
#define PREHEAT_1_LABEL "PLA"          // Added by config.ini
#define PREHEAT_1_TEMP_BED 45          // Added by config.ini
#define PREHEAT_1_TEMP_CHAMBER 35      // Added by config.ini
#define PREHEAT_1_TEMP_HOTEND 185      // Added by config.ini
#define PREHEAT_2_FAN_SPEED 0          // Added by config.ini
#define PREHEAT_2_LABEL "COLD"         // Added by config.ini
#define PREHEAT_2_TEMP_BED 0           // Added by config.ini
#define PREHEAT_2_TEMP_CHAMBER 0       // Added by config.ini
#define PREHEAT_2_TEMP_HOTEND 0        // Added by config.ini
#define PREHEAT_3_FAN_SPEED 255        // Added by config.ini
#define PREHEAT_3_LABEL "PETG"         // Added by config.ini
#define PREHEAT_3_TEMP_BED 110         // Added by config.ini
#define PREHEAT_3_TEMP_CHAMBER 35      // Added by config.ini
#define PREHEAT_3_TEMP_HOTEND 240      // Added by config.ini
#define PREHEAT_BEFORE_LEVELING        // Added by config.ini
#define PREVENT_COLD_EXTRUSION         // Added by config.ini
#define PREVENT_LENGTHY_EXTRUDE        // Added by config.ini
//#define PRINTER_EVENT_LEDS             // Added by config.ini
#define PRINTJOB_TIMER_AUTOSTART       // Added by config.ini
#define PROBING_MARGIN 10              // Added by config.ini
#define SDSUPPORT                      // Added by config.ini
#define SEGMENT_LEVELED_MOVES          // Added by config.ini
#define SERIAL_PORT 2                  // Added by config.ini
#define SERIAL_PORT_2 0               // Added by config.ini
#define SERVO_DELAY { 50 }             // Added by config.ini
#define SHOW_BOOTSCREEN                // Added by config.ini
#define SHOW_CUSTOM_BOOTSCREEN         // Added by config.ini
#define SOFT_PWM_SCALE 0               // Added by config.ini
#define SPEAKER                        // Added by config.ini
#define STRING_CONFIG_H_AUTHOR "(Stan, Ender-3 Pro)" // Added by config.ini
#define TEMP_BED_HYSTERESIS 3          // Added by config.ini
#define TEMP_BED_RESIDENCY_TIME 10     // Added by config.ini
#define TEMP_BED_WINDOW 1              // Added by config.ini
#define TEMP_HYSTERESIS 3              // Added by config.ini
#define TEMP_RESIDENCY_TIME 10         // Added by config.ini
#define TEMP_SENSOR_0 1                // Added by config.ini
#define TEMP_SENSOR_1 0                // Added by config.ini
#define TEMP_SENSOR_2 0                // Added by config.ini
#define TEMP_SENSOR_3 0                // Added by config.ini
#define TEMP_SENSOR_4 0                // Added by config.ini
#define TEMP_SENSOR_5 0                // Added by config.ini
#define TEMP_SENSOR_6 0                // Added by config.ini
#define TEMP_SENSOR_7 0                // Added by config.ini
#define TEMP_SENSOR_BED 1              // Added by config.ini
#define TEMP_SENSOR_BOARD 0            // Added by config.ini
#define TEMP_SENSOR_CHAMBER 0          // Added by config.ini
#define TEMP_SENSOR_COOLER 0           // Added by config.ini
#define TEMP_SENSOR_PROBE 0            // Added by config.ini
#define TEMP_SENSOR_REDUNDANT 0        // Added by config.ini
#define TEMP_WINDOW 1                  // Added by config.ini
#define THERMAL_PROTECTION_BED         // Added by config.ini
#define THERMAL_PROTECTION_HOTENDS     // Added by config.ini
#define USE_PROBE_FOR_Z_HOMING         // Added by config.ini
#define VALIDATE_HOMING_ENDSTOPS       // Added by config.ini
#define XY_PROBE_FEEDRATE (150*60)     // Added by config.ini
#define X_BED_SIZE 235                 // Added by config.ini
#define X_DRIVER_TYPE A4988          // Added by config.ini
#define X_ENABLE_ON 0                  // Added by config.ini
#define X_HOME_DIR -1                  // Added by config.ini
#define X_MAX_ENDSTOP_HIT_STATE LOW    // Added by config.ini
#define X_MAX_POS 250                  // Added by config.ini
#define X_MIN_ENDSTOP_HIT_STATE LOW    // Added by config.ini
#define X_MIN_POS 0                    // Added by config.ini
#define Y_BED_SIZE 235                 // Added by config.ini
#define Y_DRIVER_TYPE A4988          // Added by config.ini
#define Y_ENABLE_ON 0                  // Added by config.ini
#define Y_HOME_DIR -1                  // Added by config.ini
#define Y_MAX_ENDSTOP_HIT_STATE LOW    // Added by config.ini
#define Y_MAX_POS Y_BED_SIZE           // Added by config.ini
#define Y_MIN_ENDSTOP_HIT_STATE LOW    // Added by config.ini
#define Y_MIN_POS 0                    // Added by config.ini
#define Z_CLEARANCE_BETWEEN_PROBES 3   // Added by config.ini
#define Z_CLEARANCE_DEPLOY_PROBE 10    // Added by config.ini
#define Z_CLEARANCE_MULTI_PROBE 5      // Added by config.ini
#define Z_DRIVER_TYPE A4988          // Added by config.ini
#define Z_ENABLE_ON 0                  // Added by config.ini
#define Z_HOME_DIR -1                  // Added by config.ini
#define Z_MAX_ENDSTOP_HIT_STATE LOW    // Added by config.ini
#define Z_MAX_POS 200                  // Added by config.ini
#define Z_MIN_ENDSTOP_HIT_STATE HIGH   // Added by config.ini
#define Z_MIN_POS 0                    // Added by config.ini
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE HIGH // Added by config.ini
#define Z_PROBE_FEEDRATE_FAST (10*60)  // Added by config.ini
#define Z_PROBE_FEEDRATE_SLOW (Z_PROBE_FEEDRATE_FAST / 2) // Added by config.ini
#define Z_PROBE_LOW_POINT -2           // Added by config.ini
#define Z_PROBE_OFFSET_RANGE_MAX 20    // Added by config.ini
#define Z_PROBE_OFFSET_RANGE_MIN -20   // Added by config.ini
#define Z_SAFE_HOMING                  // Added by config.ini
#define Z_SAFE_HOMING_X_POINT ((X_BED_SIZE - 10) / 2) // Added by config.ini
#define Z_SAFE_HOMING_Y_POINT ((Y_BED_SIZE - 10) / 2) // Added by config.ini
#define ARC_SUPPORT                    // Added by config.ini
#define AUTOTEMP                       // Added by config.ini
#define AUTOTEMP_FACTOR 0.1f           // Added by config.ini
#define AUTOTEMP_MAX 250               // Added by config.ini
#define AUTOTEMP_MIN 210               // Added by config.ini
#define AUTOTEMP_OLDWEIGHT 0.98        // Added by config.ini
#define AUTO_REPORT_TEMPERATURES       // Added by config.ini
#define AXIS_RELATIVE_MODES { false, false, false, false } // Added by config.ini
#define BABYSTEPPING                   // Added by config.ini
#define BABYSTEP_ALWAYS_AVAILABLE      // Added by config.ini
#define BABYSTEP_DISPLAY_TOTAL         // Added by config.ini
#define BABYSTEP_INVERT_Z false        // Added by config.ini
#define BABYSTEP_MULTIPLICATOR_XY 1    // Added by config.ini
#define BABYSTEP_MULTIPLICATOR_Z 1     // Added by config.ini
#define BABYSTEP_WITHOUT_HOMING        // Added by config.ini
#define BINARY_FILE_TRANSFER           // Added by config.ini
#define BLOCK_BUFFER_SIZE 16           // Added by config.ini
#define BLTOUCH_DELAY 300              // Added by config.ini
#define BLTOUCH_FORCE_SW_MODE          // Added by config.ini
#define BLTOUCH_HS_MODE true           // Added by config.ini
#define BOOTSCREEN_TIMEOUT 4000        // Added by config.ini
#define BOOT_MARLIN_LOGO_SMALL         // Added by config.ini
#define BUFSIZE 4                      // Added by config.ini
#define CHAMBER_AUTO_FAN_PIN -1        // Added by config.ini
#define CHAMBER_AUTO_FAN_SPEED 255     // Added by config.ini
#define CHAMBER_AUTO_FAN_TEMPERATURE 30 // Added by config.ini
#define CHAMBER_CHECK_INTERVAL 5000    // Added by config.ini
#define CHOPPER_TIMING CHOPPER_DEFAULT_24V // Added by config.ini
#define CONTROLLERFAN_IDLE_TIME 60     // Added by config.ini
#define CONTROLLERFAN_SPEED_ACTIVE 255 // Added by config.ini
#define CONTROLLERFAN_SPEED_IDLE 0     // Added by config.ini
#define CONTROLLERFAN_SPEED_MIN 0      // Added by config.ini
#define CONTROLLER_FAN_EDITABLE        // Added by config.ini
#define CONTROLLER_FAN_MENU            // Added by config.ini
#define CONTROLLER_FAN_PIN FAN2_PIN    // Added by config.ini
#define COOLER_AUTO_FAN_PIN -1         // Added by config.ini
#define COOLER_AUTO_FAN_SPEED 255      // Added by config.ini
#define COOLER_AUTO_FAN_TEMPERATURE 18 // Added by config.ini
#define CUSTOM_FIRMWARE_UPLOAD         // Added by config.ini
#define DEFAULT_MINIMUMFEEDRATE 0.0    // Added by config.ini
#define DEFAULT_MINSEGMENTTIME 20000   // Added by config.ini
#define DEFAULT_MINTRAVELFEEDRATE 0.0  // Added by config.ini
#define DEFAULT_STEPPER_TIMEOUT_SEC 120 // Added by config.ini
#define DEFAULT_VOLUMETRIC_EXTRUDER_LIMIT 0.00 // Added by config.ini
#define DIAG_JUMPERS_REMOVED           // Added by config.ini
#define DISABLE_IDLE_E true            // Added by config.ini
#define DISABLE_IDLE_X true            // Added by config.ini
#define DISABLE_IDLE_Y true            // Added by config.ini
#define DISABLE_IDLE_Z true            // Added by config.ini
#define DOUBLECLICK_FOR_Z_BABYSTEPPING // Added by config.ini
#define DOUBLECLICK_MAX_INTERVAL 1250  // Added by config.ini
#define E0_AUTO_FAN_PIN FAN1_PIN       // Added by config.ini
#define E0_CHAIN_POS -1                // Added by config.ini
#define E0_CURRENT 700                 // Added by config.ini
#define E0_HYBRID_THRESHOLD 30         // Added by config.ini
#define E0_MICROSTEPS 16               // Added by config.ini
#define E0_RSENSE 0.11                 // Added by config.ini
#define E1_HYBRID_THRESHOLD 30         // Added by config.ini
#define E2_HYBRID_THRESHOLD 30         // Added by config.ini
#define E3_HYBRID_THRESHOLD 30         // Added by config.ini
#define E4_HYBRID_THRESHOLD 30         // Added by config.ini
#define E5_HYBRID_THRESHOLD 30         // Added by config.ini
#define E6_HYBRID_THRESHOLD 30         // Added by config.ini
#define E7_HYBRID_THRESHOLD 30         // Added by config.ini
#define EMERGENCY_PARSER               // Added by config.ini
#define ENCODER_100X_STEPS_PER_SEC 130 // Added by config.ini
#define ENCODER_10X_STEPS_PER_SEC 80   // Added by config.ini
#define ENCODER_5X_STEPS_PER_SEC 30    // Added by config.ini
#define ENCODER_RATE_MULTIPLIER        // Added by config.ini
#define EVENT_GCODE_SD_ABORT "G28XY"   // Added by config.ini
#define EXTENDED_CAPABILITIES_REPORT   // Added by config.ini
#define EXTRUDER_AUTO_FAN_SPEED 255    // Added by config.ini
#define EXTRUDER_AUTO_FAN_TEMPERATURE 50 // Added by config.ini
#define FANMUX0_PIN -1                 // Added by config.ini
#define FANMUX1_PIN -1                 // Added by config.ini
#define FANMUX2_PIN -1                 // Added by config.ini
#define FAN_MIN_PWM 50                 // Added by config.ini
#define FASTER_GCODE_PARSER            // Added by config.ini
#define FINE_MANUAL_MOVE 0.025         // Added by config.ini
#define FOLDER_SORTING -1              // Added by config.ini
#define HEATER_BED_INVERTING false     // Added by config.ini
#define HOLD_MULTIPLIER 0.5            // Added by config.ini
#define HOMING_BUMP_DIVISOR { 2, 2, 4 } // Added by config.ini
#define HOMING_BUMP_MM { 5, 5, 2 }     // Added by config.ini
#define HOST_ACTION_COMMANDS           // Added by config.ini
#define HOST_PROMPT_SUPPORT            // Added by config.ini
#define INTERPOLATE true               // Added by config.ini
#define STEP_STATE_E HIGH              // Added by config.ini
#define STEP_STATE_I HIGH              // Added by config.ini
#define STEP_STATE_J HIGH              // Added by config.ini
#define STEP_STATE_K HIGH              // Added by config.ini
#define STEP_STATE_U HIGH              // Added by config.ini
#define STEP_STATE_V HIGH              // Added by config.ini
#define STEP_STATE_W HIGH              // Added by config.ini
#define STEP_STATE_X HIGH              // Added by config.ini
#define STEP_STATE_Y HIGH              // Added by config.ini
#define STEP_STATE_Z HIGH              // Added by config.ini
#define I_HYBRID_THRESHOLD 3           // Added by config.ini
#define J_HYBRID_THRESHOLD 3           // Added by config.ini
#define K_HYBRID_THRESHOLD 3           // Added by config.ini
#define LCD_INFO_MENU                  // Added by config.ini
#define LED_COLOR_PRESETS              // Added by config.ini
//#define LED_CONTROL_MENU               // Added by config.ini
#define LED_USER_PRESET_BLUE 0         // Added by config.ini
#define LED_USER_PRESET_BRIGHTNESS 255 // Added by config.ini
#define LED_USER_PRESET_GREEN 128      // Added by config.ini
#define LED_USER_PRESET_RED 255        // Added by config.ini
#define LED_USER_PRESET_WHITE 255      // Added by config.ini
#define MANUAL_E_MOVES_RELATIVE        // Added by config.ini
#define MANUAL_FEEDRATE { 50*60, 50*60, 4*60, 2*60 } // Added by config.ini
#define MAX_ARC_SEGMENT_MM 1.0         // Added by config.ini
#define MAX_CMD_SIZE 96                // Added by config.ini
#define MENU_HOLLOW_FRAME              // Added by config.ini
#define MICROSTEP_MODES { 16, 16, 16, 16, 16, 16 } // Added by config.ini
#define MINIMUM_PLANNER_SPEED 0.05     // Added by config.ini
#define MIN_ARC_SEGMENT_MM 0.1         // Added by config.ini
#define MIN_CIRCLE_SEGMENTS 72         // Added by config.ini
#define MIN_STEPS_PER_SEGMENT 6        // Added by config.ini
#define NO_SD_HOST_DRIVE               // Added by config.ini
#define N_ARC_CORRECTION 25            // Added by config.ini
#define PE_LEDS_COMPLETED_TIME (30*60) // Added by config.ini
#define PLR_ENABLED_DEFAULT false      // Added by config.ini
#define POWER_LOSS_MIN_Z_CHANGE 0.05   // Added by config.ini
#define POWER_LOSS_RECOVERY            // Added by config.ini
#define PREHEAT_SHORTCUT_MENU_ITEM     // Added by config.ini
#define PROBE_DEPLOY_STOW_MENU         // Added by config.ini
#define PROBE_OFFSET_WIZARD            // Added by config.ini
#define PROPORTIONAL_FONT_RATIO 1.0    // Added by config.ini
#define QUICK_HOME                     // Added by config.ini
#define SCROLL_LONG_FILENAMES          // Added by config.ini
#define SDCARD_RATHERRECENTFIRST       // Added by config.ini
#define SDCARD_SORT_ALPHA              // Added by config.ini
#define SDSORT_CACHE_NAMES true        // Added by config.ini
#define SDSORT_CACHE_VFATS 2           // Added by config.ini
#define SDSORT_DYNAMIC_RAM true        // Added by config.ini
#define SDSORT_GCODE false             // Added by config.ini
#define SDSORT_LIMIT 40                // Added by config.ini
#define SDSORT_USES_RAM true           // Added by config.ini
#define SDSORT_USES_STACK false        // Added by config.ini
#define SD_FINISHED_RELEASECOMMAND "M84" // Added by config.ini
#define SD_FINISHED_STEPPERRELEASE true // Added by config.ini
#define SD_MENU_CONFIRM_START          // Added by config.ini
#define SD_PROCEDURE_DEPTH 1           // Added by config.ini
#define SERIAL_OVERRUN_PROTECTION      // Added by config.ini
#define SET_PROGRESS_MANUALLY          // Added by config.ini
#define SET_PROGRESS_PERCENT           // Added by config.ini
#define SET_REMAINING_TIME             // Added by config.ini
#define SHOW_ELAPSED_TIME              // Added by config.ini
#define SHOW_PROGRESS_PERCENT          // Added by config.ini
#define SLOWDOWN                       // Added by config.ini
#define SLOWDOWN_DIVISOR 2             // Added by config.ini
#define SOUND_ON_DEFAULT               // Added by config.ini
#define EDGE_STEPPING                  // Added by config.ini
#define STATUS_BED_ANIM                // Added by config.ini
#define STATUS_CHAMBER_ANIM            // Added by config.ini
#define STATUS_HOTEND_ANIM             // Added by config.ini
#define STATUS_HOTEND_INVERTED         // Added by config.ini
#define STATUS_MESSAGE_SCROLLING       // Added by config.ini
#define STEALTHCHOP_E                  // Added by config.ini
#define STEALTHCHOP_XY                 // Added by config.ini
#define STEALTHCHOP_Z                  // Added by config.ini
#define TEMP_SENSOR_AD595_GAIN 1.0     // Added by config.ini
#define TEMP_SENSOR_AD595_OFFSET 0.0   // Added by config.ini
#define TEMP_SENSOR_AD8495_GAIN 1.0    // Added by config.ini
#define TEMP_SENSOR_AD8495_OFFSET 0.0  // Added by config.ini
#define THERMAL_PROTECTION_BED_HYSTERESIS 2 // Added by config.ini
#define THERMAL_PROTECTION_BED_PERIOD 180 // Added by config.ini
#define THERMAL_PROTECTION_COOLER_HYSTERESIS 3 // Added by config.ini
#define THERMAL_PROTECTION_COOLER_PERIOD 10 // Added by config.ini
#define THERMAL_PROTECTION_HYSTERESIS 4 // Added by config.ini
#define THERMAL_PROTECTION_PERIOD 40   // Added by config.ini
#define THERMOCOUPLE_MAX_ERRORS 15     // Added by config.ini
#define TMC_DEBUG                      // Added by config.ini
#define TX_BUFFER_SIZE 0               // Added by config.ini
#define ULTIPANEL_FEEDMULTIPLY         // Added by config.ini
//#define USE_CONTROLLER_FAN             // Added by config.ini
#define USE_WATCHDOG                   // Added by config.ini
#define U_HYBRID_THRESHOLD 3           // Added by config.ini
#define V_HYBRID_THRESHOLD 3           // Added by config.ini
#define WATCH_BED_TEMP_INCREASE 2      // Added by config.ini
#define WATCH_BED_TEMP_PERIOD 180      // Added by config.ini
#define WATCH_COOLER_TEMP_INCREASE 3   // Added by config.ini
#define WATCH_COOLER_TEMP_PERIOD 60    // Added by config.ini
#define WATCH_TEMP_INCREASE 2          // Added by config.ini
#define WATCH_TEMP_PERIOD 40           // Added by config.ini
#define W_HYBRID_THRESHOLD 3           // Added by config.ini
#define X2_HYBRID_THRESHOLD 100        // Added by config.ini
#define XYZ_HOLLOW_FRAME               // Added by config.ini
#define X_CHAIN_POS -1                 // Added by config.ini
#define X_CURRENT 580                  // Added by config.ini
#define X_CURRENT_HOME X_CURRENT       // Added by config.ini
#define X_HYBRID_THRESHOLD 100         // Added by config.ini
#define X_MICROSTEPS 16                // Added by config.ini
#define X_RSENSE 0.11                  // Added by config.ini
#define Y2_HYBRID_THRESHOLD 100        // Added by config.ini
#define Y_CHAIN_POS -1                 // Added by config.ini
#define Y_CURRENT 580                  // Added by config.ini
#define Y_CURRENT_HOME Y_CURRENT       // Added by config.ini
#define Y_HYBRID_THRESHOLD 100         // Added by config.ini
#define Y_MICROSTEPS 16                // Added by config.ini
#define Y_RSENSE 0.11                  // Added by config.ini
#define Z2_HYBRID_THRESHOLD 3          // Added by config.ini
#define Z3_HYBRID_THRESHOLD 3          // Added by config.ini
#define Z4_HYBRID_THRESHOLD 3          // Added by config.ini
#define Z_CHAIN_POS -1                 // Added by config.ini
#define Z_CURRENT 580                  // Added by config.ini
#define Z_CURRENT_HOME Z_CURRENT       // Added by config.ini
#define Z_HYBRID_THRESHOLD 3           // Added by config.ini
#define Z_MICROSTEPS 16                // Added by config.ini
#define Z_RSENSE 0.11                  // Added by config.ini
#define CONFIGURATION_H_VERSION 02010300 // Added by config.ini
#define CONFIGURATION_ADV_H_VERSION 02010300 // Added by config.ini
//#define PIDTEMPBED                     // Added by config.ini
//#define EEPROM_BOOT_SILENT             // Added by config.ini

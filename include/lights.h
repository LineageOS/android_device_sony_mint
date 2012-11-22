char const*const RED_LED_FILE 			= "/sys/class/leds/led_7-rgb1-red/brightness";
char const*const GREEN_LED_FILE 		= "/sys/class/leds/led_8-rgb2-green/brightness";
char const*const BLUE_LED_FILE 			= "/sys/class/leds/led_9-rgb3-blue/brightness";

char const*const LED_FILE_TRIGGER		= "/sys/devices/i2c-10/10-0040/use_pattern";
char const*const LED_FILE_PATTERN		= "/sys/devices/i2c-10/10-0040/pattern_data";
char const*const LED_FILE_DELAYON		= "/sys/devices/i2c-10/10-0040/pattern_delay";
char const*const LED_FILE_DELAYOFF		= "/sys/devices/i2c-10/10-0040/pattern_duration_secs";

char const*const ON				= "1";
char const*const OFF				= "0";
char const*const PATTERN			= "0x00000001";
char const*const DELAYON			= "1";
char const*const DELAYOFF			= "8";


char const*const LCD_BACKLIGHT_FILE		= "/sys/class/leds/led_1-lcd/brightness";

char const*const ALS_FILE			= "/sys/devices/i2c-10/10-0040/als_on";

#define BEEPER 25

#define LEDs 16

#define VRX_SCK 18
#define VRX_MOSI 23

#define CS1 5
#define CS2 27
#define CS3 13
#define CS4 14
#define CS5 15
#define CS6 2

#define ADC1 ADC1_CHANNEL_6
#define ADC2 ADC1_CHANNEL_0
#define ADC3 ADC1_CHANNEL_7
#define ADC4 ADC1_CHANNEL_4
#define ADC5 ADC1_CHANNEL_5
#define ADC6 ADC1_CHANNEL_3

#define ADC1_GPIO 34    
#define ADC2_GPIO 36    
#define ADC3_GPIO 35    
#define ADC4_GPIO 32    
#define ADC5_GPIO 33    
#define ADC6_GPIO 39    

#define I2C_SDA 21
#define I2C_SCL 22

#ifdef OLED
#undef OLED
#endif

// enable arduino ota by default, since there is no USB connector on this board
#ifndef USE_ARDUINO_OTA
#define USE_ARDUINO_OTA
#endif
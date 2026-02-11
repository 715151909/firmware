#define HAS_SDCARD
#define SDCARD_USE_SPI1

#define BATTERY_PIN 1 // A battery voltage measurement pin, voltage divider connected here to
// measure battery voltage ratio of voltage divider = 2.0 (assumption)
#define ADC_MULTIPLIER 2.11 // 2.0 + 10% for correction of display undervoltage.
#define ADC_CHANNEL ADC1_GPIO1_CHANNEL

#define I2C_SDA 2
#define I2C_SCL 3

// external qwiic connector
#define GPS_DEFAULT_NOT_PRESENT 1
#define GPS_RX_PIN 12
#define GPS_TX_PIN 13

#define LED_POWER 4
#define BUTTON_PIN 5
#define BUTTON_NEED_PULLUP

// TTGO uses a common pinout for their SX1262 vs RF95 modules - both can be enabled and
// we will probe at runtime for RF95 and if not found then probe for SX1262
#define USE_RF95 // RFM95/SX127x
#define USE_SX1262
#define USE_SX1280

#define LORA_SCK 6
#define LORA_MISO 7
#define LORA_MOSI 8
#define LORA_CS 9
#define LORA_RESET 10

// per SX1276_Receive_Interrupt/utilities.h
#define LORA_DIO0 11
#define LORA_DIO1 12 // TCXO_EN ?
#define LORA_DIO2 13
#define LORA_RXEN 21 // Note: This is outside the 1-13 range but required for some LoRa modules
#define LORA_TXEN 10

// per SX1262_Receive_Interrupt/utilities.h
#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 12
#define SX126X_BUSY 13
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL
#endif

// per SX128x_Receive_Interrupt/utilities.h
#ifdef USE_SX1280
#define SX128X_CS LORA_CS
#define SX128X_DIO1 11
#define SX128X_DIO2 12
#define SX128X_DIO3 13
#define SX128X_BUSY 4
#define SX128X_RESET LORA_RESET
#define SX128X_RXEN 21 // Note: This is outside the 1-13 range but required for some LoRa modules
#define SX128X_TXEN 10
#define SX128X_MAX_POWER 3
#endif

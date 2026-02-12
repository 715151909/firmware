#pragma once

// ========================
// T-LoRa T3-S3 引脚定义 (无 E-Ink 屏幕版，已移除 GPS 和按钮)
// ========================

// 基础功能
#define HAS_SDCARD          // 启用 SD 卡支持
#define SDCARD_USE_SPI1     // SD 卡使用 SPI1 总线

// 电池监测
#define BATTERY_PIN 1       // 电池电压测量引脚
#define ADC_MULTIPLIER 2.11 // 电压分压比校正系数 (2.0 + 10% 补偿)
#define ADC_CHANNEL ADC1_GPIO1_CHANNEL

// I2C 总线 (用于传感器/键盘等)
#define I2C_SDA 2
#define I2C_SCL 3

// 用户交互
#define LED_POWER 4         // 电源指示灯（保留）

// LoRa 模块通用引脚 (支持多种芯片)
#define LORA_SCK 6
#define LORA_MISO 7
#define LORA_MOSI 8
#define LORA_CS 9
#define LORA_RESET 10

// RFM95/SX127x 特定引脚
#define LORA_DIO0 11
#define LORA_DIO1 12        // TCXO 使能控制
#define LORA_DIO2 13
#define LORA_RXEN 21        // 接收使能 (部分模块需要)
#define LORA_TXEN 10        // 发射使能

// SX1262 特定配置
#define USE_SX1262          // 启用 SX1262 支持
#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 12
#define SX126X_BUSY 13
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH    // DIO2 控制 RF 开关
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 // TCXO 参考电压 1.8V
#define TCXO_OPTIONAL               // TCXO 为可选组件
#endif

// 注意: 
// - 已完全移除 GPS 相关定义
// - 已完全移除 BUTTON_PIN 相关定义
// - RF95 和 SX1280 在此配置中已禁用

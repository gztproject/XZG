#include "const/hw.h"

// Ethernet configurations
// !!! Don't forget to edit ETH_CFG_CNT !!!
EthConfig ethConfigs[] = {
    {.addr = 0, .pwrPin = 12, .mdcPin = 23, .mdiPin = 18, .phyType = ETH_PHY_LAN8720, .clkMode = ETH_CLOCK_GPIO17_OUT, .pwrAltPin = -1}, // 0 Olimex-ESP32-POE
    {.addr = 1, .pwrPin = 16, .mdcPin = 23, .mdiPin = 18, .phyType = ETH_PHY_LAN8720, .clkMode = ETH_CLOCK_GPIO0_IN, .pwrAltPin = -1},   // 1 WT32-ETH01
    {.addr = 0, .pwrPin = -1, .mdcPin = 23, .mdiPin = 18, .phyType = ETH_PHY_LAN8720, .clkMode = ETH_CLOCK_GPIO17_OUT, .pwrAltPin = 5},  // 2 T-Internet-POE
};

// ZigBee configurations
// !!! Don't forget to edit ZB_CFG_CNT !!!
ZbConfig zbConfigs[] = {
    {.txPin = 4, .rxPin = 36, .rstPin = 16, .bslPin = 32},  // 0
    {.txPin = 17, .rxPin = 5, .rstPin = 33, .bslPin = 32},  // 1
    {.txPin = 33, .rxPin = 32, .rstPin = 12, .bslPin = 14}, // 2
    {.txPin = 4, .rxPin = 36, .rstPin = 5, .bslPin = 16},   // 3
    {.txPin = 5, .rxPin = 17, .rstPin = 33, .bslPin = 32},  // 4
    {.txPin = 16, .rxPin = 5, .rstPin = 33, .bslPin = 32},  // 5
    {.txPin = 16, .rxPin = 5, .rstPin = 13, .bslPin = 4},   // 6
    {.txPin = 4, .rxPin = 36, .rstPin = 5, .bslPin = 16},   // 7
};

// Mist configurations
// !!! Don't forget to edit MIST_CFG_CNT !!!
MistConfig mistConfigs[] = {
    {.btnPin = -1, .btnPlr = 0, .uartSelPin = -1, .uartSelPlr = 0, .ledModePin = -1, .ledModePlr = 0, .ledPwrPin = -1, .ledPwrPlr = 0}, // 0
    {.btnPin = 35, .btnPlr = 1, .uartSelPin = 33, .uartSelPlr = 1, .ledModePin = 12, .ledModePlr = 1, .ledPwrPin = 14, .ledPwrPlr = 1}, // 1
    {.btnPin = 35, .btnPlr = 1, .uartSelPin = 4, .uartSelPlr = 1, .ledModePin = 12, .ledModePlr = 1, .ledPwrPin = 14, .ledPwrPlr = 1},  // 2
};

// Board configurations
// !!! Don't forget to edit BOARD_CFG_CNT !!!
BrdConfigStruct brdConfigs[] = {
    {"UZG-01", 2, 0, 1},
    {"SLZB-06", 1, 1, 2},
    {"WT32-ETH01", 1, 1, 0},
    {"T-Internet-POE", 2, 0, 0},
    {"Olimex-ESP32-POE", 0, 0, 0},
    {"China-GW", 0, 2, 0},
    {"TubesZB-eth", 1, 1, 0},
    {"TubesZB-eth_usb", 1, 4, 0},
    {"TubesZB-poe", 0, 5, 0},
    {"TubesZB-poe-2022", 0, 6, 0},
    {"TubesZB-poe-2023", 0, 7, 0},
    {"CZC-1.0", 2, 0, 1},
};
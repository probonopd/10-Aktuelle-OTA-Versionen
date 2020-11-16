
/* ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <CANguru-Buch@web.de> wrote this file. As long as you retain this
 * notice you can do whatever you want with this stuff. If we meet some day,
 * and you think this stuff is worth it, you can buy me a beer in return
 * Gustav Wostrack
 * ----------------------------------------------------------------------------
 */

#include "display2use.h"

#ifdef LCD28

#include "MOD-LCD.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"
#include <Adafruit_STMPE610.h>
#include <CANguru.h>
#ifdef LCD28
const uint16_t image_data_CANguru[] PROGMEM = {
    // Generated by   : ImageConverter 565 Online
    // Generated from : CANguru.png
    // Time generated : Tue, 15 Oct 19 15:23:00 +0200  (Server timezone: CET)
    // Image Size     : 48x48 pixels
    // Memory usage   : 4608 bytes

    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0010 (16) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0020 (32) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0030 (48) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x71C7, 0xEBAE, 0x8208, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0040 (64) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0050 (80) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0060 (96) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x30C3, 0xFC10, 0xDB8E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0070 (112) pixels
    0x0000, 0xAAAA, 0xE38E, 0x40E3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0080 (128) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0090 (144) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2882, 0xFC10, 0xFC10, 0x30A2, 0x20A0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00A0 (160) pixels
    0x79C7, 0xFC10, 0xDB8E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00B0 (176) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00C0 (192) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6986, 0xFC10, 0xFC10, 0x5145, 0x6223, 0x0000, 0x0000, 0x0000, 0x0000, 0x4162, // 0x00D0 (208) pixels
    0xCB2C, 0xFC10, 0xC30C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00E0 (224) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00F0 (240) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x71C7, 0xFC10, 0xF3EF, 0x3101, 0x9B46, 0x0000, 0x0000, 0x0000, 0x59C3, 0x7264, // 0x0100 (256) pixels
    0xE3AE, 0xFC10, 0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0110 (272) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0120 (288) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE38E, 0xDB8E, 0x59E3, 0x6A44, 0x0000, 0x0000, 0x0000, 0x8B05, 0x7264, // 0x0130 (304) pixels
    0xE3AE, 0xFC10, 0x8208, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0140 (320) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0150 (336) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x38C3, 0x9A69, 0x4162, 0xABA7, 0xCC68, 0xCC68, 0xA366, 0x4162, 0x4923, // 0x0160 (352) pixels
    0xF3EF, 0xC32C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0170 (368) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0180 (384) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6203, 0xDCC9, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xD489, 0x4963, // 0x0190 (400) pixels
    0x6186, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x01A0 (416) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x01B0 (432) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1880, 0xDCA9, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xC428, // 0x01C0 (448) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x01D0 (464) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x01E0 (480) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8B05, 0xE4C9, 0xB3E7, 0xDCC9, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, // 0x01F0 (496) pixels
    0x4982, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0200 (512) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0210 (528) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xB3E7, 0x82C5, 0x8AE5, 0x6223, 0xED0A, 0xE4E9, 0x6A44, 0x4142, 0xD489, // 0x0220 (544) pixels
    0x8AE5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0230 (560) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0240 (576) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBC07, 0xDCA9, 0xED0A, 0xC428, 0xED0A, 0xDCC9, 0xA386, 0xBC07, 0xBC07, // 0x0250 (592) pixels
    0x8B05, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0260 (608) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0270 (624) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xABA7, 0xED0A, 0xED09, 0x7264, 0xED0A, 0xC428, 0xD489, 0xED0A, 0xED0A, // 0x0280 (640) pixels
    0x59E3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0290 (656) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x02A0 (672) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6203, 0xED0A, 0xC448, 0x59C3, 0xCC48, 0x9305, 0xB3E7, 0xED0A, 0xCC68, // 0x02B0 (688) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x02C0 (704) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x02D0 (720) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xC448, 0x51C3, 0x4901, 0x4901, 0x2880, 0x82C5, 0xE509, 0x6223, // 0x02E0 (736) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x02F0 (752) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0300 (768) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x51C3, 0x4982, 0x30A0, 0x5942, 0x38E1, 0x0000, 0xA386, 0x0000, // 0x0310 (784) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0320 (800) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0330 (816) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBBE7, 0xBC07, 0x4982, 0xC428, 0x7264, 0x0820, 0x0000, // 0x0340 (832) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0350 (848) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0360 (864) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xA366, 0xB3E7, 0x7244, 0xED0A, 0x51A2, 0x0000, 0x0000, // 0x0370 (880) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0380 (896) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0390 (912) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4982, 0x6203, 0x28E1, 0x0000, 0x0000, 0x0000, // 0x03A0 (928) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03B0 (944) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03C0 (960) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x28E1, 0x51A2, 0x9326, 0x9305, 0x0000, 0x0000, // 0x03D0 (976) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03E0 (992) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03F0 (1008) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7264, 0xED0A, 0xED0A, 0xDCA9, 0x30E1, 0x0000, // 0x0400 (1024) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0410 (1040) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0420 (1056) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6A23, 0xED0A, 0xED0A, 0xED0A, 0xC428, 0x28C1, // 0x0430 (1072) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0440 (1088) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0450 (1104) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6223, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xDCA9, // 0x0460 (1120) pixels
    0x9B46, 0x4162, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0470 (1136) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0480 (1152) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x59E3, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, // 0x0490 (1168) pixels
    0xED0A, 0xED0A, 0xDCA9, 0xC448, 0xABA7, 0x8AE5, 0x4142, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x04A0 (1184) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x04B0 (1200) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1040, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, // 0x04C0 (1216) pixels
    0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xCC48, 0x82E5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x04D0 (1232) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x04E0 (1248) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xDCC9, 0xDCC9, 0xED0A, 0xED0A, 0xE509, // 0x04F0 (1264) pixels
    0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xCC48, 0x4162, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0500 (1280) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0510 (1296) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xABC7, 0x4162, 0xE4E9, 0xE4E9, 0x51C3, // 0x0520 (1312) pixels
    0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xDCA9, 0x49A2, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0530 (1328) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0540 (1344) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x28E1, 0xB3E7, 0xA366, 0x20A0, 0xA366, 0xED0A, 0xB3E7, 0x9326, // 0x0550 (1360) pixels
    0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xD468, 0x0820, 0x0000, 0x0000, 0x0000, // 0x0560 (1376) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0570 (1392) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3101, 0xC428, 0x7A84, 0x7264, 0xCC48, 0xED0A, 0xCC68, 0x49A2, 0xDCC9, // 0x0580 (1408) pixels
    0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0x9B46, 0x0000, 0x0000, 0x0000, // 0x0590 (1424) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x05A0 (1440) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xA386, 0x59C3, 0xB3C7, 0xCC68, 0xABA7, 0x7AA5, 0x4184, 0x6223, 0xDCC9, // 0x05B0 (1456) pixels
    0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xCC48, 0xD488, 0xED0A, 0xED0A, 0xDCC9, 0x0000, 0x0000, 0x0000, // 0x05C0 (1472) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x05D0 (1488) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x51A2, 0xABA7, 0x9B46, 0x0000, 0x0000, 0x0000, 0xA3EC, 0xCCAE, 0x51C3, // 0x05E0 (1504) pixels
    0xCC68, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xBC28, 0x59E3, 0x7AA5, 0xCC68, 0xED0A, 0xED0A, 0xED0A, 0x7AA4, 0x0000, 0x0000, // 0x05F0 (1520) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0600 (1536) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xDCA9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xC48E, 0xE570, // 0x0610 (1552) pixels
    0x6A67, 0x9326, 0xDCC9, 0xED0A, 0xE509, 0x9305, 0x7264, 0xD4A9, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xB3C7, 0x0000, 0x0000, // 0x0620 (1568) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0630 (1584) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xC48E, // 0x0640 (1600) pixels
    0xFDF2, 0xBC6E, 0x49A4, 0x9B66, 0x8AE5, 0x9326, 0xED09, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xD468, 0x0000, 0x0000, // 0x0650 (1616) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0660 (1632) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0670 (1648) pixels
    0xA3EC, 0xFDF2, 0xFDD2, 0x9BAB, 0x6A23, 0xED09, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xE4E9, 0x0000, 0x0000, // 0x0680 (1664) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0690 (1680) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x06A0 (1696) pixels
    0x0000, 0x72A8, 0xED71, 0x8B4A, 0xC428, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0x3101, 0x0000, // 0x06B0 (1712) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x06C0 (1728) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x06D0 (1744) pixels
    0x0000, 0xC428, 0x4183, 0x28E2, 0xE4E9, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0x6203, 0x0000, // 0x06E0 (1760) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x06F0 (1776) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0700 (1792) pixels
    0x0000, 0xED0A, 0xD4A9, 0x59E3, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0x7264, 0x0000, // 0x0710 (1808) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0720 (1824) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0730 (1840) pixels
    0x0000, 0xE4E9, 0xDCA9, 0x6223, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0x7264, 0x0000, // 0x0740 (1856) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0750 (1872) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0760 (1888) pixels
    0x0000, 0xD488, 0xED0A, 0x1860, 0xED0A, 0xED0A, 0xED0A, 0xD488, 0x9325, 0xABA6, 0xE4E9, 0xED0A, 0xED0A, 0xED0A, 0x82C5, 0x0000, // 0x0770 (1904) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0780 (1920) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0790 (1936) pixels
    0x0000, 0xB3C7, 0xED0A, 0x59E3, 0xDCA9, 0xED0A, 0xED0A, 0x7A84, 0x0000, 0x0000, 0x8AE5, 0xED0A, 0xED0A, 0xED0A, 0xBC08, 0x0000, // 0x07A0 (1952) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x07B0 (1968) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x07C0 (1984) pixels
    0x0000, 0x7264, 0xED0A, 0x9B46, 0xB3E7, 0xED0A, 0xED0A, 0x8AE5, 0x0000, 0x0000, 0x0000, 0xB3C7, 0xED0A, 0xED0A, 0xED0A, 0x8AE5, // 0x07D0 (2000) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x07E0 (2016) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x07F0 (2032) pixels
    0x0000, 0x0000, 0xD489, 0xCC48, 0x7AA4, 0xED0A, 0xED0A, 0xC428, 0x0000, 0x0000, 0x0000, 0x0000, 0xA386, 0xED0A, 0xED0A, 0xED09, // 0x0800 (2048) pixels
    0x9B46, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0810 (2064) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0820 (2080) pixels
    0x0000, 0x0000, 0xC428, 0xED09, 0x4982, 0xD4A9, 0xED0A, 0xD4A9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6A44, 0xD488, 0xED0A, // 0x0830 (2096) pixels
    0xED0A, 0xCC68, 0x7AA4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0840 (2112) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7264, 0xBBE7, 0xBC07, 0xABC7, 0x82A5, 0x7264, 0x7264, // 0x0850 (2128) pixels
    0x7264, 0x82C5, 0xBBE7, 0xBBE7, 0x82A5, 0xB3E7, 0xED0A, 0xDCA9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8AE5, // 0x0860 (2144) pixels
    0xCC68, 0xED0A, 0xED0A, 0xDCA9, 0xABA7, 0x7264, 0x0820, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0870 (2160) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4142, 0xD468, 0xD488, 0xB3E7, 0x4162, 0x9305, 0x9B46, 0x9B46, // 0x0880 (2176) pixels
    0x9B46, 0x9B46, 0x9B46, 0x9B46, 0xA366, 0xE4E9, 0xED0A, 0xBC08, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0890 (2192) pixels
    0x0000, 0x6203, 0xABA7, 0xD4A9, 0xED0A, 0xED0A, 0xE4E9, 0xCC68, 0xBBE7, 0x9B66, 0x8AE5, 0x7264, 0x51C3, 0x1860, 0x0000, 0x0000, // 0x08A0 (2208) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3101, 0xDCA9, 0xED0A, 0xED0A, 0xED0A, // 0x08B0 (2224) pixels
    0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xED0A, 0xD489, 0x51C3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x08C0 (2240) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x4982, 0x8AE5, 0xABC7, 0xC428, 0xD489, 0xDCA9, 0xE4C9, 0xED09, 0xED0A, 0xED0A, 0xE4E9, 0x0820, // 0x08D0 (2256) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1860, 0x1860, 0x1860, 0x1860, // 0x08E0 (2272) pixels
    0x1860, 0x1860, 0x1860, 0x1860, 0x1860, 0x1040, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x08F0 (2288) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0900 (2304) pixels
};
#endif
// Variablen
Adafruit_STMPE610 ts = Adafruit_STMPE610();
Adafruit_ILI9341 display9341 = Adafruit_ILI9341(TFT_CS, TFT_DC);
const int16_t x_pos = 15;
const int16_t y_pos = 5;
int16_t height, middleX, middleY;
bool bfillRect;

// liefert die Adresse des Display
Adafruit_ILI9341 *getDisplay()
{
  return &display9341;
}

// setzt die gleichnamige Variable auf wahr
void setbfillRect() {
  bfillRect = true;
}

// erzeugt den pulsierenden Kreis
void fillTheCircle()
{
  static uint16_t color = 0;
  if (bfillRect == false)
    return;
  display9341.fillScreen(ILI9341_BLACK);
  for (int16_t i = middleY; i > 0; i -= 3)
  {
    // The INVERSE color is used so circles alternate white/black
    display9341.drawCircle(middleX, middleY, i, color);
    color++;
  }
  bfillRect = false;
}

// zeigt ein char array auf dem Display an
void displayLCD(const char *txt)
{
  int y = display9341.getCursorY();
  if (y > height)
  {
    display9341.fillScreen(ILI9341_BLACK);
    display9341.setCursor(x_pos, y_pos);
  }
  else
    display9341.setCursor(x_pos, y);
  display9341.println(txt);
}

// zeigt einen String auf dem Display an
void displayStringLCD(String str)
{
  int y = display9341.getCursorY();
  if (y > height)
  {
    display9341.fillScreen(ILI9341_BLACK);
    display9341.setCursor(x_pos, y_pos);
  }
  else
    display9341.setCursor(x_pos, y);
  display9341.println(str);
}

// zeigt eine IP-Adresse auf dem Display an
void displayIP(IPAddress ip)
{
  int y = display9341.getCursorY();
  if (y > height)
  {
    display9341.fillScreen(ILI9341_BLACK);
    display9341.setCursor(x_pos, y_pos);
  }
  else
    display9341.setCursor(x_pos, y);
  display9341.println(ip);
}

// initialisiert das Display und zeigt das CANguru an
void initDisplayLCD28()
{
  const uint8_t splash_x = 48;
  const uint8_t splash_y = 48;
  bfillRect = false;
  display9341.begin();
  Wire.begin();
  pinMode(TFT_DC, OUTPUT);
  delay(500);
  ts.begin(TS_I2C_ADDRESS);
  delay(500);
  // Clear the buffer
  display9341.fillScreen(ILI9341_BLACK);
  display9341.setRotation(3);
  height = display9341.height();
  middleY = height / 2;
  middleX = display9341.width() / 2;
  uint8_t offset_x = (display9341.width() - display9341.width() / splash_x * splash_x) / 2;
  for (uint8_t sply = 0; sply < display9341.height() / splash_y; sply++)
    for (uint8_t splx = 0; splx < display9341.width() / splash_x; splx++)
      display9341.drawRGBBitmap(offset_x + splx * splash_x, sply * splash_y, image_data_CANguru, splash_x, splash_y);
  delay(1000);
  display9341.setTextColor(ILI9341_RED); // Draw red text
  display9341.setTextSize(2);            // Draw 2X-scale text
  displayLCD("CANguru-Bridge");
  displayLCD(version);
  displayLCD("");
  display9341.setTextColor(ILI9341_WHITE); // Draw white text
}
#endif
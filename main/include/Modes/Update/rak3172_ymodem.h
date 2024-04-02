 /*
 * rak3172_ymodem.h
 *
 *  Copyright (C) Daniel Kampert, 2023
 *	Website: www.kampis-elektroecke.de
 *  File info: RAK3172 serial driver.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), 
 * to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * 
 * Errors and commissions should be reported to DanielKampert@kampis-elektroecke.de
 */

#ifndef RAK3172_YMODEM_H_
#define RAK3172_YMODEM_H_

#include "Definitions/rak3172_defs.h"

/** @brief          Deinitialize the RAK3172 driver.
 *  @param p_Device RAK3172 device object
 *  @param p_Data   Pointer to firmware data
 *  @param Length   Length of firmware data
 *  @return         RAK3172_ERR_OK when successful
 *                  RAK3172_ERR_INVALID_STATE when the device was not initialized before
 */
RAK3172_Error_t RAK3172_RunUpdate(RAK3172_t& p_Device, const uint8_t* const p_Data, uint32_t Length);

#endif /* RAK3172_YMODEM_H_ */
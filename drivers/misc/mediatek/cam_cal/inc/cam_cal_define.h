/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */
#ifndef _CAM_CAL_DATA_H
#define _CAM_CAL_DATA_H

#ifdef CONFIG_COMPAT
/* 64 bit */
#include <linux/fs.h>
#include <linux/compat.h>
#endif

struct CAM_CAL_SENSOR_INFO {
	u32 sensor_id;
};

#ifdef OPLUS_FEATURE_CAMERA_COMMON
/* cengshang@vanyol.com add for otp porting in 206AC */
struct stCAM_CAL_DATAINFO_STRUCT {
	u32 sensorID;
	u32 deviceID; /* MAIN = 0x01, SUB  = 0x02, MAIN_2 = 0x04,SUB2 = 0x08, MAIN3 =0x10*/
	u32 dataLength;
	u32 sensorVendorid;
	u8  vendorPos;
	u8  sensorPos;
	u8  vendorByte;
	u8  *dataBuffer;
};

struct stCAM_CAL_INFO_STRUCT {
	u32 u4Offset;
	u32 u4Length;
	u32 sensorID;
	/*
	 * MAIN = 0x01,
	 * SUB  = 0x02,
	 * MAIN_2 = 0x04,
	 * SUB_2 = 0x08,
	 * MAIN_3 = 0x10,
	 */
	u32 deviceID;
	u8 *pu1Params;
};

#ifdef CONFIG_COMPAT

struct COMPAT_stCAM_CAL_INFO_STRUCT {
	u32 u4Offset;
	u32 u4Length;
	u32 sensorID;
	u32 deviceID;
	compat_uptr_t pu1Params;
};
#endif
#endif
#endif/*_CAM_CAL_DATA_H*/
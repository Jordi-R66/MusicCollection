#pragma once

#include "common.h"

typedef uint16 Time;

#pragma pack(1)
typedef struct {
	uint8 day : 5;
	uint8 month : 4;
	uint8 year; // 255 Years counting from 1900
} Date;
#pragma pack()


#pragma once

#include "common.h"
#include "dates.h"
#include "entities.h"

typedef uint16 musicId;

#pragma pack(1)
typedef struct {
	musicId id;
	string title;
	Date releaseDate;
	Time duration;
	Artist* artists[];
} Music;
#pragma pack()
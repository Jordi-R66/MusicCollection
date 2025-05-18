#pragma once

#include "common.h"
#include "dates.h"
#include "entities.h"

#pragma pack(1)
typedef struct {
	Id id;
	string title;
	Date releaseDate;
	Time duration;
	void** artists;
} Music;
#pragma pack()
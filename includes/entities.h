#pragma once

#include "common.h"
#include "dates.h"



#pragma pack(1)
typedef struct {
	Id id;
	string name;
	string firstname;
	Date birth;
} Person;

typedef Person Artist;

typedef struct {
	Id id;
	Artist** members;
} Band;
#pragma pack()
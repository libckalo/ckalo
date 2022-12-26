#pragma once
#include "common.h"

// some magic, i'm too lazy
#define GET_VERSION(ch) ((ch)->version)
#define GET_CHARACTER(ch) ((ch)->type)
int detect_version(const character_model *ch);
character_type detect_character(const character_model *ch);  

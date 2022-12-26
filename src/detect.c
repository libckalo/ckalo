#include "common.h"
#include "detect.h"

int detect_version(const character_model *ch)
{
    // very simple
    return GET_VERSION(ch);
    /*switch (GET_VERSION(ch)) {
        case 1: return 1; break;
        case 2: return 2; break;
        default: return 0; break;
    }*/
}

character_type detect_character(const character_model *ch)
{
    // very simple
    return GET_CHARACTER(ch);
    /*switch (GET_CHARACTER(ch)) {
        case 0: return CAREFUL; break;
        case 1: return KALO; break;
    }*/
}

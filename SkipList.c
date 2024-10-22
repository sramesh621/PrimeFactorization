#include "SkipList.h"

void initSkipList(SkipList* const initMe)
{
    initMe->numDigits = 0;
    initMe->index = 0;
    initMe->nextNode = NULL;
}

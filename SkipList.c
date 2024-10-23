#include "SkipList.h"

void initSkipList(SkipList* const initMe)
{
    initMe->numDigits = 0;
    initMe->index = 0;
    initMe->nextNode = NULL;
}

int getListIndex(SkipListNode* const skipList, byte numDigits)
{
    int toReturn = -1;
    if(skipList != NULL)
    {
        SkipListNode* previousNode = NULL;
        SkipListNode* currentNode = skipList;
        while(currentNode != NULL)
        {
            if(currentNode->numDigits >= numDigits)
            {
                break;
            }
            previousNode = currentNode;
            currentNode = currentNode->nextNode;
        }
    }
    if(currentNode != NULL)
    {
        toReturn = currentNode->index;
    }
    return toReturn;
}

void addListNode(SkipListNode* const skipList, byte numDigits, int location)
{
    
}
void deleteSkipList(SkipListNode* const toDelete);

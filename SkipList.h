struct SkipListNode
{
    byte numDigits;
    int index;
    SkipListNode* nextNode;
};

void initSkipList(SkipListNode* const initMe);
void getListIndex(SkipListNode* const skipList, byte numDigits);
void addListNode(SkipListNode* const skipList, byte numDigits, int location);
void deleteSkipList(SkipListNode* const toDelete);

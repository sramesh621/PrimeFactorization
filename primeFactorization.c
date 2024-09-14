#include "math.h"

int** findBinaryGaps(int i)
{
           int bitLength = (int)log2(i) + 1;
           int** gapsList = (int**)malloc(4 * bitLength);
           int* binaryArray = toBinaryArray(i);
           int idx = 0;
           int gapIndex = 0;
           while(idx < bitLength)
                      {
                                 int* binaryArrayPtr = (int*)((int)binaryArray + 4 * idx);
                                 if(*binaryArrayPtr == 0)
                                 {
                                            int* emptySpan = (int*)malloc(8);
                                            *emptySpan = idx;
                                           while(*binaryArrayPtr == 0)
                                                      {
                                                                 binaryArrayPtr = (int*)((int)binaryArrayPtr + 4);
                                                                 idx++;
                                                      }
                                            *((int)emptySpan + 4) = idx - 1;
                                            *gapsList = emptySpan;
                                            gapsList = (int*)((int)gapsList + 4);
                                 }
                                 while(*binaryArrayPtr == 1)
                                 {
                                            binaryArrayPtr = (int*)((int)binaryArrayPtr + 4);
                                 }
                      }
           return gapsList;
}

int* toBinaryArray(int i)
           {
                int bitLength = (int)log2(i) + 1;
                int* binaryArray = (int*)malloc(4 * bitLength);
                int* binaryArrayPtr = (int*)binaryArray;
                int copy = i;
                int radix = 0;
                while(copy >= 0)
                {
                   int remainder = copy & 1;
                   *binaryArrayPtr = remainder;
                   binaryArrayPtr = (int*)((int)binaryArrayPtr + 4);
                   copy >>= 1;
                }
                return binaryArray;
            }

            void factorTheKey()
            {
            var product = document.getElementById(“keyInputId”).value;
                var maxFactor = Math.sqrt(product);
                var i;
                for(i = 2; i<= maxFactor; i++)
                {
                    var primeRepArray = toBinaryArray(i);
                }
            }

#include "math.h"

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

            function factorTheKey()
            {
            var product = document.getElementById(“keyInputId”).value;
                var maxFactor = Math.sqrt(product);
                var i;
                for(i = 2; i<= maxFactor; i++)
                {
                    var primeRepArray = toBinaryArray(i);
                }
            }

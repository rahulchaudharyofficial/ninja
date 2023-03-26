#include "array.h"

bool isValid(int* arr, int arrSize)
{
    bool flag = false;
    if(arr == NULL || arrSize <= 0 || arrSize > 10000) {
        return flag;
    }
    for(int i=0; i<arrSize;i++)
    {
        if(*(arr+i) != 0) {
            flag = true;
            break;
        }
    }
    return flag;
}

void duplicateZeros(int* arr, int arrSize) {
    if(isValid(arr, arrSize)) {
        for(int i=0;i<arrSize;i++) {
            if(*(arr + i) == 0) {
                int j = arrSize-2;
                while(j>i) {
                    *(arr+j+1) = *(arr + j);
                    j--;
                }
                *(arr +j+1)=0;
                i++;
            }
        }
    }
}

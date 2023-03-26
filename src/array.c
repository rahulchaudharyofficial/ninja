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

bool mergeValidation(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    bool flag = false;
    if(
        (nums1 == NULL) ||
        (nums2 == NULL) ||
        (nums1Size != (m + n)) ||
        (nums2Size != n) ||
        ((m < 0) || (n > 200)) ||
        ((nums1Size < 1) || (nums1Size > 200))
    ) {
        return flag;
    }
    int MAX = 1000000000;
    int i= 0, j = 0;
    for(; i < m; i++)
    {
        if(nums1[i] < (MAX * -1) || nums1[i] > MAX)
        {
            break;
        }
    }
    for(j = 0; j < n; j++)
    {
        if(nums2[j] < (MAX * -1) || nums2[j] > MAX)
        {
            break;
        }
    }
    if(i == m && j== n) {
        flag = true;
    }
    return flag;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if(mergeValidation(nums1, nums1Size,m,nums2,nums2Size,n)) {
        for (int i = 0; i < n;i++)
        {
            break;
        }
    }
}

#include "common.h"
#include <stdio.h>


int* create_array(const unsigned int size)
{
    int* input = NULL;
    if(size > 0)
    {
        input = (int*) malloc(size * sizeof(int));
        if(!input)
        {
            perror("Failed to create array, returning NULL");
        }
    }
    return input;
}

void fill_array_with_random_data(int* arr, const int size)
{
    srand(size);
    if(arr != NULL && size > 0)
    {
        for(int i=0; i < size; i++)
        {
            *(arr + i) = (rand() / size + 1);
        }
    }
}

void print_array(int* arr, const int size)
{
    if(arr != NULL && size > 0)
    {
        for(int i=0;i < size; i++)
        {
            printf("%d\t", *(arr + i));
        }
        printf("\n");
    }
}
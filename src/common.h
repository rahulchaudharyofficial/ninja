#ifndef _COMMON_H_
#define _COMMON_H_
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <stdbool.h>

    int* create_array(const unsigned int size);
    void fill_array_with_random_data(int* arr, const int size);
    void print_array(int*, const int);
#endif
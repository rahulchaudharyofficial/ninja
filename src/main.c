#include "array.h"


int main(int argc, char **argv) {
  int arr[] = {8,4,5,0,0,0,0,7};
  const int SIZE = sizeof(arr) / sizeof(int);
  print_array(arr, SIZE);
  duplicateZeros(arr, SIZE);
  print_array(arr, SIZE);
  return EXIT_SUCCESS;
}

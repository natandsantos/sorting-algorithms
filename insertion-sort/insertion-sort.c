#include <stdio.h>
#define INIARR 0
#define DOT_SIZE_CONST 6.1

void insertionSort(int *arr, int arrSize);

int main(int argc, char* agrv[]){
  int ages[10] = {10, 15, 13, 28, 19, 45, 22, 70, 17, 6};
  int agesSize = sizeof(ages) / sizeof(ages[0]);
  int i = 0;

  printf("\n%20c***UNORDERED ARRAY***\n", ' ');
  for(i; i < agesSize * DOT_SIZE_CONST; i++){
    printf("-");
  }
  
  printf("\n");

  for(int i = 0; i < agesSize; i++){
    printf("|%3d  ", ages[i]);
  }
  
  printf("|\n");

  for(i = 0; i < agesSize * DOT_SIZE_CONST; i++){
    printf("-");
  }

  
  insertionSort(ages, agesSize);
  printf("\n%22c***ORDERED ARRAY***\n", ' ');
  for(i = 0; i < agesSize * DOT_SIZE_CONST; i++){
    printf("-");
  }

  printf("\n");

  for(int i = 0; i < agesSize; i++){
    printf("|%3d  ", ages[i]);
  }

  printf("|\n", ' ');

  for(i = 0; i < agesSize * DOT_SIZE_CONST; i++){
    printf("-");
  }

  return 0;
}

void insertionSort(int *arr, int arrSize){

  int temp, i;

  for(int i = 1; i < arrSize; i++){
    temp = arr[i];
    int j = i - 1;
    while(j >= INIARR && temp < arr[j]){
     arr[j+1] = arr[j];
      j--;
    }
    arr[j + 1] = temp; 
  }
  
}
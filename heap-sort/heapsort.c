#include <stdio.h>
#define ARR_END 0

void swap(int* parentNode, int* childNode);
void heapfy(int arr[], int arrSize, int parentNode);
void heapsort(int arr[], int arrSize);

int main(int argc, int* argv[]){
  int ages[10];
  printf("****HEAPSORT ALGORITHM AT WORK****\n");
  printf("\nWrite");

  int agesSize =  sizeof(ages) / sizeof(ages[0]);

  heapsort(ages, agesSize);

  for(int i = 0; i < agesSize; i++){
    printf("%d ", ages[i]);
  }
  
  return 0;
}

void swap(int* parentNode, int* childNode){
  int temp = *parentNode;
  *parentNode = *childNode;
  *childNode = temp;
}

void heapfy(int arr[], int arrSize, int parentNode){
  
  if(arrSize <= 1)
    return;
  
  int largest, leftChild, rightChild;

  largest = parentNode;
  leftChild = parentNode * 2 + 1;
  rightChild = parentNode * 2 + 2;

  if(leftChild < arrSize && arr[leftChild] > arr[largest]){
    largest = leftChild;
  }
  if(rightChild < arrSize && arr[rightChild] > arr[largest]){
    largest = rightChild;
  }

  if(largest != parentNode){
    swap(&arr[parentNode], &arr[largest]);
    heapfy(arr, arrSize, largest);
  }
}

void heapsort(int arr[], int arrSize){
  
  for(int i = arrSize / 2 - 1; i >= ARR_END; i--){
    heapfy(arr, arrSize, i);
  }

  for(int i = arrSize - 1; i > ARR_END; i--){
    swap(&arr[ARR_END], &arr[i]);
    
    heapfy(arr, i, 0);
    
  }
}


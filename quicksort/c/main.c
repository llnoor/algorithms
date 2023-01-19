#include <stdio.h>
#include <stdlib.h>

#define N 200

void quicksort(int *arr, int low, int high);
int partition(int *arr, int low, int high);

int main() {
    int arr[]={1,34,2,12,43,9,0,4,6,7,9,10,-1};
    int size= sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i< size; i++){
    printf("%d ",arr[i]);
    }
    printf("\n");

    quicksort(arr,0,size-1);
    printf("===============================\n");
    for (int i=0; i< size; i++){
    printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

void quicksort(int *arr, int low, int high) {
    if (low<high) {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot-1);
        quicksort(arr, pivot+1, high);
    }
}

int partition(int *arr, int low, int high) {
    int i = low-1;
    int temp = 0;
    for (int k= low; k< high; k++) {
        if (arr[k]<arr[high]){
            i++;
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;

    return i+1;
}


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int *selection_sort(int *arr);
int smallest(int *arr);

int main() {
    int arr[]={1,34,2,12,43,9,0,4,6,7,9,10,-1};
    int size = 0;
    while (arr[size]!=-1) {
        size++;
    }
    for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
    printf("\n");
    int *sort_arr = selection_sort(arr);
    for (int i = 0; i < size; i++) {
		printf("%d ", sort_arr[i]);
	}
    return 0;
}

int smallest(int *arr) {
    int size=0;
    while (arr[size]!=-1) {
        size++;
    }
    int smallest = arr[0];
    int smallest_index = 0;
    for (int i=1; i<size; i++) {
        if (smallest > arr[i]) {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

int *selection_sort(int *arr) {
    int size=0;
    while (arr[size]!=-1) {
        size++;
    }
    int* new_arr = malloc(size * sizeof(int));
    for (int k=0;k<size;k++){
        int smallest_index = smallest(arr);
        new_arr[k]=arr[smallest_index];
        arr[smallest_index] = 1000;
    }
    //free(new_arr);
    return new_arr;
}

#include <stdio.h>

int binary_search(int *arr,int item);

int main() {
    int arr[]={1,3,4,6,7,9,10,-1};
    printf("%d\n",binary_search(arr,7));
    return 0;
}

int binary_search(int *arr,int item) {
    int i=0;
    while (arr[i]!=-1) {
        i++;
    }
    
    if (i==0) {
        return -1;
    }
    int low = 0;
    int high = i-1;
    while (low <= high){
        int mid = (high+low)/2;
        int guess = arr[mid];
        if (guess==item){
            return mid;
        } else if (guess>item) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return -1;
}

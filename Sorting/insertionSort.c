#include<stdio.h>
void insertionSort(int arr[],int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] >= temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void printArray(int arr[],int n){
    for(int i = 0; i < n; i++) {
        printf("arr[%d]:- %d\t",i,arr[i]);
    }
}

int main(){
    int arr[] = {6,2,1,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before sorting the array is:");
    printArray(arr,n);
    printf("\nAfter sorting the array is:\n");
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}
#include<stdio.h>
void selectionSort(int arr[],int n){
    for(int i = 0; i < n; i++) {
        int min = i;
        for(int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}
#include<stdio.h>


void BubbleSort(int arr[],int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    BubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}
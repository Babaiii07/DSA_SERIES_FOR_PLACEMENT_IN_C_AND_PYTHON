#include<stdio.h>
#include<stdlib.h>

void printArray(int arr[],int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d]:-%d\n",i,arr[i]);
    }
}

void QuickSort(int arr[],int low,int high) {
    if (low < high) {
        int partitionIndex = partition(arr,low,high);
        QuickSort(arr,low,partitionIndex-1);
        QuickSort(arr,partitionIndex+1,high);
    }
}

int partition(int arr[],int low,int high) {
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    int temp;
    do {
        while (arr[i]<=pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}



int main(){
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] :- ", i);
        scanf("%d", &arr[i]);
    }
    printf("Before sorting the array is:-\n");
    printArray(arr,n);
    QuickSort(arr,0,n-1);
    printf("after sorting the array is :- \n");
    printArray(arr,n);
    return 0;
}
#include <stdio.h>

void merge(int arr[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = 0;
    int temp[high - low + 1];

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            k++;
            i++;
        } else {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    while (i <= mid) {
        temp[k] = arr[i];
        k++;
        i++;
    }

    while (j <= high) {
        temp[k++] = arr[j++];
    }

    for (i = low, k = 0; i <= high; i++, k++) {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d]:- %d\t", i, arr[i]);
    }
}

int main() {
    int arr[] = {6, 2, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting the array is:\n");
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    printf("\nAfter sorting the array is:\n");
    printArray(arr, n);

    return 0;
}

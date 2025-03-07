def partition(arr, low, high):
    pivot = arr[low]
    i = low + 1
    j = high
    while True:
        while i <= high and arr[i] <= pivot:
            i += 1
        while arr[j] > pivot:
            j -= 1
        if i < j:
            arr[i], arr[j] = arr[j], arr[i]
        else:
            break
    arr[low], arr[j] = arr[j], arr[low]
    return j
          

def quickSort(arr, low, high):
    if low < high:
        partition_index = partition(arr, low, high)
        quickSort(arr, low, partition_index - 1)
        quickSort(arr, partition_index + 1, high)

def printArray(arr):
    for i in arr:
        print(i, end=' ')
    print()

arr = [6, 5, 2, 4, 3, 1]
print("Before Sorting:")
printArray(arr)
quickSort(arr, 0, len(arr) - 1)  
print("After Sorting:")
printArray(arr)

def merge(arr, low, high, mid):
    i = low
    j = mid + 1
    temp = []

    while i <= mid and j <= high:
        if arr[i] <= arr[j]:
            temp.append(arr[i])
            i += 1
        else:
            temp.append(arr[j])
            j += 1

    while i <= mid:
        temp.append(arr[i])
        i += 1

    while j <= high:
        temp.append(arr[j])
        j += 1

    for i in range(low, high + 1):
        arr[i] = temp[i - low]  

def mergeSort(arr, low, high):
    if low < high:
        mid = (low + high) // 2
        mergeSort(arr, low, mid)
        mergeSort(arr, mid + 1, high)
        merge(arr, low, high, mid)

def printArray(arr):
    for i in arr:
        print(i, end=' ')
    print()

arr = [6, 5, 2, 4, 3, 1]
print("Before Sorting:")
printArray(arr)
mergeSort(arr, 0, len(arr) - 1)  
print("After Sorting:")
printArray(arr)

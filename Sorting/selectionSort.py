def selectionSort(arr,n):
    for i in range(len(arr)-1):
        min_index = i
        for j in range(i+1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]



def printArray(arr,n):
    for i in arr:
        print(i)

list = [6,5,2,4,3,1]
print("Before Sorting the array is :-")
printArray(arr=list,n=len(list))
print("Before Sorting the Array is:-")
selectionSort(list,len(list))
printArray(list,len(list))


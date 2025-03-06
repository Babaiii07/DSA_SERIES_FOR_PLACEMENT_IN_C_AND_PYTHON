def insertionSort(arr,n):
    for i in range(1,len(arr)):
        key = arr[i]
        j = i-1
        while j >=0 and key < arr[j] :
                arr[j + 1] = arr[j]
                j = j - 1
        arr[j + 1] = key
    



def printArray(arr,n):
    for i in arr:
        print(i)

list = [6,5,2,4,3,1]
print("Before Sorting the array is :-")
printArray(arr=list,n=len(list))
print("Before Sorting the Array is:-")
insertionSort(list,len(list))
printArray(list,len(list))


def BubbleSort(arr,n):
    for i in range(n-1):
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp



def printArray(arr,n):
    for i in arr:
        print(i)

list = [6,5,2,4,3,1]
print("Before Sorting the array is :-")
printArray(arr=list,n=len(list))
print("Before Sorting the Array is:-")
BubbleSort(list,len(list))
printArray(list,len(list))


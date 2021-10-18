import sys

def insertionSort1(n, arr):
    
    for i in range(0,len(arr)):
        key=arr[i]
        j=i-1

        while (key < arr[j]) and (j >= 0):
            arr[j+1] = arr[j]
            print(' '.join(map(str, arr)))
            j -= 1
        
    arr[j+1] = key
    print(' '.join(map(str, arr)))
    
if __name__ == "__main__":
    n = int(input().strip())
    arr = list(map(int, input().strip().split(' ')))
    insertionSort1(n, arr)

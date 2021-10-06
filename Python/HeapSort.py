import time
def heapify(arr, n, i): 
    largest = i
    left = 2 * i + 1      
    right = 2 * i + 2     
 
    if left < n and arr[i] < arr[left]: 
        largest = left
 
    if right < n and arr[largest] < arr[right]: 
        largest = right
 
    # Change root if needed
    if largest != i:
        arr[i],arr[largest] = arr[largest],arr[i] 
 
        # Heapify the root. 
        heapify(arr, n, largest)
 
# Heap Sort
def heapSort(arr): 
    n = len(arr)  
    for i in range(n // 2 - 1, -1, -1): 
        heapify(arr, n, i)
 
    for i in range(n-1, 0, -1): 
        # swap the largest item with root node 
        arr[i], arr[0] = arr[0], arr[i]
        heapify(arr, i, 0)
 
# For Array length 2000
a1 = []
for i in range(0,2000):
    a1.append(i)
t1 = time.time()
heapSort(a1)  
t2 = time.time()
print("--------------------------------------------------------------------")
 
print("Time for array with length 2000 is: ", t2-t1)
 
print("--------------------------------------------------------------------")
 
# For Array length 4000
a2 = []
for i in range(0,4000):
    a2.append(i)
t3 = time.time()
heapSort(a2)
t4 = time.time()
 
print("Time for array with length 4000 is: ", t4-t3)
 
print("--------------------------------------------------------------------")
 
# For array with length 6000
a3 = []
for i in range(0,6000):
    a3.append(i)
t5 = time.time()
heapSort(a3)
t6 = time.time()
 
print("Time for array with length 6000 is: ", t6-t5)
 
print("--------------------------------------------------------------------")
 
# For array with length 8000
a4 = []
for i in range(0,8000):
    a4.append(i)
t7 = time.time()
heapSort(a4)
t8 = time.time()
 
print("Time for array with length 8000 is: ", t8-t7)
 
print("--------------------------------------------------------------------")
 
# For array with length 10000
a5 = []
for i in range(0,10000):
    a5.append(i)
t9 = time.time()
heapSort(a5)
t10 = time.time()
 
print("Time for array with length 10000 is: ", t10-t9)

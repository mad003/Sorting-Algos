#   Bubble Sort
#   Time Complexity: O(n^2)

print("Enter array that you want to sort: ")    #Take user input
l=list(map(int,input().split()))                #save into list

for i in range(len(l)):
    for j in range(0,len(l)-1-i):
        if l[j]>l[j+1]:
            l[j],l[j+1]=l[j+1],l[j]
print(l)    #print sorted list
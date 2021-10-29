//Binary Insertion Sort use binary search to find the proper location to insert the selected item at each iteration. 
//In insertion sort, it takes O(i) (at ith iteration) in worst case. 
//Using binary search, it is reduced to O(log i)
// for worst case: Olog(NlogN)

#include <stdio.h>
int binary_search(int a[], int item, int low, int high)
{
    if (high <= low)
        return (item > a[low])?  (low + 1): low;
    int mid = (low + high)/2;
    if(item == a[mid])
        return mid+1;
    if(item > a[mid])
        return binary_search(a, item, mid+1, high);
    return binary_search(a, item, low, mid-1);
}
void insertion_sort(int a[], int n)
{
    int i, location = 0, j, k, selected, n = sizeof(a)/sizeof(a[0]);
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        selected = a[i]; 
        location = binary_search(a, selected, 0, j);
        while (j >= location)
        {
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = selected;
    }
}
int main()
{
    int a[] = {1,2,5,6,3,9,1};
    int i = 0;
    insertionSort(a);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ",a[i]);
    return 0;
}

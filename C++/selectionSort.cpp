// Program to implement selection sort

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, minval;

	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		minval = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[minval])
			minval = j;

		// Swap the minimum element with first element
		swap(&arr[minval], &arr[i]);
	}
}

/* Function to print the sorted array*/
void display(int arr[], int n)
{
	int i;
	for (i=0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = {84, 55, 19, 72, 41};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	cout << "***Sorted array***\n";
	display(arr, n);
	return 0;
}

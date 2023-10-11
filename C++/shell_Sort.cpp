// Code for the Shell sort in cpp language 

#include <iostream>
using namespace std;

int shell_Sort(int arr[], int ln)
{

	for (int gap = ln/2; gap > 0; gap /= 2)
	{

		for (int i = gap; i < ln; i += 1)
		{
			int temp = arr[i];

			int j;			
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			
			arr[j] = temp;
		}
	}
	return 0;
}

void printArr(int arr[], int size)
{
	for (int i=0; i<size; i++)
		cout << arr[i] << " ";
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

	int arr[size];

    cout<<"Enter the elements of array -"<<endl;
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

	cout << "Array before sorting: \n";
	printArr(arr, size);

	shell_Sort(arr, size);

	cout << "\nArray after sorting: \n";
	printArr(arr, size);

	return 0;
}
// This code is contributed by - Swapnil0803

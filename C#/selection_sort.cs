// C# program for Selection Sort
using System;

class Program
{
	static void sort(int []arr)
	{
		int n = arr.Length;
    
		for (int i = 0; i < n - 1; i++)
		{
			int indx = i;
			for (int j = i + 1; j < n; j++){
				if (arr[j] < arr[indx]){
					indx = j;
				}
			}

			// Swap the found minimum element with the first element
			int temp = arr[indx];
			arr[indx] = arr[i];
			arr[i] = temp;
		}
	}

	// Prints the array
	static void printArray(int []arr)
	{
		int n = arr.Length;
		for (int i=0; i<n; ++i){
			Console.Write(arr[i]+" ");
		}
		Console.WriteLine();
	}

	// Test code
	public static void Main()
	{
		int []arr = {55,44,33,22,11};
		sort(arr);
		Console.WriteLine("Sorted array:");
		printArray(arr);
	}

}

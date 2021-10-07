#include <bits/stdc++.h>

using namespace std;

// Insertion sort: Shifting each element to its correct position in the array
// Time Complexity: O(N^2)
// Space Complexity: O(N)

// Insertion sort method
void insertionSort(int arr[], int n)
{
  // Loop through each element
	for (int i = 1; i < n; i++){
		int temp = arr[i]; // Save the element for after array shifting
		int j = i-1;
		// Keep shifting if element is not in the right place
		while (j >= 0 && arr[j] > temp){
			arr[j+1] = arr[j];
			j -= 1;
		}
		arr[j+1] = temp; // Set the next position as that element
	}
}

// Main function to test insertion sort method
int main(){
  // Get input values
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
        cin >> a[i];
	}
	insertionSort(a, n); // Perform insertion sort
	// Print out sorted array
	for (int i = 0; i < n; i++){
        cout << a[i] << "\n";
	}
	return 0;
}

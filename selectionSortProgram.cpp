// program: selection sort
// author: nareshp24

#include <iostream>

using namespace std;

// function prototype
int* selectionSort(int arr[], int size);

int main()
{
	int ARRAY_SIZE = 0;
		
		// take user input for array size
		cout << "Enter array size: " << endl;
		cin >> ARRAY_SIZE;

	int unsorted[ARRAY_SIZE] = {0};
		
		// take user input for array elements
		cout << "Enter array elements: " << endl;
		for(int i = 0; i < ARRAY_SIZE; i++)
			cin >> unsorted[i];
		cout << endl;

		// display unsorted array
		cout << "----------------------------" << endl;
		cout << "Before sorting: ";
		for(int i = 0; i < ARRAY_SIZE; i++)
			cout << unsorted[i] << " ";
		cout << endl;
	        cout << "----------------------------" << endl;

	// function call
	int* sorted = selectionSort(unsorted, ARRAY_SIZE);

		// display sorted array
		cout << "----------------------------" << endl;
		cout << "After sorting: ";
		for(int i = 0; i < ARRAY_SIZE; i++)
			cout << sorted[i] << " ";
		cout << endl;
	        cout << "----------------------------" << endl;

	return 0;
}

// function definition
int* selectionSort(int arr[], int size)
{	
	
	for(int i = 0; i < size-1; i++)		// outer loop to iterate over array
	{
		int idx = i;
		for(int j = i+1; j < size; j++)   // inner loop to find index of min element
		{
			if(arr[j] < arr[idx])
				idx = j;
		}
		
		// place min element at apt index
		int temp = arr[idx];
		arr[idx] = arr[i];
		arr[i] = temp;
	}

	return arr;
}

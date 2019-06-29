// program: selection sort
// author: nareshp24

#include <iostream>

using namespace std;

// function prototype
void selectionSort(int arr[], int size);

int main()
{
	int ARRAY_SIZE = 0;
		
		// take user input for array size
		cout << "Enter array size: " << endl;
		cin >> ARRAY_SIZE;

	int array[ARRAY_SIZE] = {0};
		
		// take user input for array elements
		cout << "Enter array elements: " << endl;
		for(int i = 0; i < ARRAY_SIZE; i++)
			cin >> array[i];
		cout << endl;

		// display unsorted array
		cout << "----------------------------" << endl;
		cout << "Before sorting: ";
		for(int i = 0; i < ARRAY_SIZE; i++)
			cout << array[i] << " ";
		cout << endl;
	        cout << "----------------------------" << endl;

		// function call
		selectionSort(array, ARRAY_SIZE);

		// display sorted array
		cout << "----------------------------" << endl;
		cout << "After sorting: ";
		for(int i = 0; i < ARRAY_SIZE; i++)
			cout << array[i] << " ";
		cout << endl;
	        cout << "----------------------------" << endl;

	return 0;
}

// function definition
void selectionSort(int arr[], int size)
{	
	
	for(int i = 0; i < size-1; i++)		// outer loop to iterate over array
	{
		int idx = i;
		for(int j = i+1; j < size; j++)   // inner loop to find index of min element
		{
			if(arr[j] < arr[idx])
				idx = j;
		}
		
		// place min element at apt index by swapping
		int temp = arr[idx];
		arr[idx] = arr[i];
		arr[i] = temp;
	}
}

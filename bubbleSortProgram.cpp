// program: bubble sort
// author: nareshp24

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size); // function prototype

int main()
{
	int ARRAY_SIZE = 0;

		cout << "Enter the size of the array" << endl;
		cin >> ARRAY_SIZE;

	int array[ARRAY_SIZE] = {0};	// init array and elements to zero
		
		// take array input from user
		cout << "Enter " << ARRAY_SIZE << " integers" << endl;
		for(int i = 0; i < ARRAY_SIZE; i++)
			cin >> array[i];
		
		// display array before sorting
		cout << endl << "----------------------------" << endl;
		cout << "Before sorting: ";
		for(int i = 0; i < ARRAY_SIZE; i++)
			cout << array[i] << " ";
		cout << endl << "----------------------------" << endl;
		
		// function call
		bubbleSort(array, ARRAY_SIZE);
		
		// display array after sorting
		cout << endl << "----------------------------" << endl;
		cout << "After sorting: ";
		for(int i = 0; i < ARRAY_SIZE; i++)
			cout << array[i] << " ";
		cout << endl << "----------------------------" << endl;

	return 0;
}

// function definition
void bubbleSort(int arr[], int size)
{
	for(int i = 0; i < size-1; i++)  // outer loop to iterate over array index
		for(int j = 0; j < size-i-1; j++)  // inner loop to iterate over array elements
			if(arr[j] > arr[j+1])  // > for descending order
			{	
				// swap
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}	
}


// program: insertion sort
// author: nareshp24

#include <iostream>

using namespace std;

// function prototype
void insertionSort(int arr[], int size);

int main()
{
	int ARRAY_SIZE = 0;

		// take user input for array size
		cout << "Enter the size of the array: " << endl;
		cin >> ARRAY_SIZE;

	int array[ARRAY_SIZE] = {0};
		
		// take user input for array elements
		cout << "Enter the array elements: " << endl;
		for(int i = 0; i < ARRAY_SIZE; i++)
			cin >> array[i];
		cout << endl;

		// display unsorted array
		cout << "------------------------" << endl;
		cout << "Before sorting: ";
		for(int i = 0; i < ARRAY_SIZE; i++)
			cout << array[i] << " ";
		cout << endl << "-----------------------" << endl;

		// function call
		insertionSort(array, ARRAY_SIZE);

		// display sorted array
		cout << "-------------------------" << endl;
		cout << "After sorting: ";
		for(int i = 0; i < ARRAY_SIZE; i++)
			cout << array[i] << " ";
		cout << endl << "--------------------------" << endl;

	return 0;
}


// function definition
void insertionSort(int arr[], int size)
{
	for(int i = 1; i < size; i++)
	{
		int value = arr[i];
		int hole = i;

		while(hole > 0 && arr[hole-1] > value)
		{
			arr[hole] = arr[hole-1];
			hole--;
		}
		arr[hole] = value;
	}

}




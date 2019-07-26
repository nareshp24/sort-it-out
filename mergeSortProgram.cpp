// program: merge sort
// author: nareshp24

#include <iostream>

using namespace std;

// function prototype
void merge(int *L, int leftCount, int *R, int rightCount, int *arr);
void mergeSort(int *arr, int n);
 

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
		mergeSort(array, ARRAY_SIZE);

		// display sorted array
		cout << "-------------------------" << endl;
		cout << "After sorting: ";
		for(int i = 0; i < ARRAY_SIZE; i++)
			cout << array[i] << " ";
		cout << endl << "--------------------------" << endl;

	return 0;
	
}//End main

void mergeSort(int *arr, int n)
{       
                if (n < 2)
                	return;
        
        int mid = n/2;
        int *leftArr = new int [mid];
        int *rightArr = new int [n - mid];
        
                for(int i = 0; i < mid; i++)
                        leftArr[i] = arr[i];
                
                for(int i = mid; i < n; i++)
                        rightArr[i - mid] = arr[i];
                        
                mergeSort(leftArr, mid);
                mergeSort(rightArr, n - mid);
                merge(leftArr, mid, rightArr, n - mid, arr);
                delete[] leftArr;
                delete[] rightArr;
                
}//End mergeSort

void merge(int *L, int leftCount, int *R, int rightCount, int *arr)
{
        int nL = leftCount;
        int nR = rightCount;
        
        int i = 0, j = 0, k = 0;
        
                while(i < nL && j < nR)
                {
                        if (L[i] <= R[j])
                                arr[k++] = L[i++];
                        else
                                arr[k++] = R[j++];                        
                }//End while
                
                while(i < nL)
                        arr[k++] = L[i++];
                        
                while(j < nR)
                        arr[k++] = R[j++];
                
}//End merge














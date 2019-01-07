//
// Created by rajat on 1/3/2019.
//

#include <iostream>
#include <vector>

using namespace std;

//function prototypes
void bubbleSort(int arr[], int length, bool type);
void selectionSort(int arr[], int length,  bool type);
void insertionSort(int arr[], int length,  bool type);
void swap(int *_a, int *_b);
void printVector(int arr[], int length);

int main(){

    int length, ch;

        cout << "How many numbers do you wish to enter? ";
        cin >> length;

    int arr[length];

        //Take the input values from user
        cout << "Enter " << length << " numbers" << endl;
        for(int i = 0; i < length; i++){
            cin >> arr[i];
        }//End for

        cout << "Select the operation you want" << endl
             << "1. Bubble sort in ascending order" << endl
             << "2. Bubble sort in descending order" << endl
             << "3. Selection sort in ascending order" << endl
             << "4. Selection sort in descending order" << endl
             << "5. Insertion sort in ascending order" << endl
             << "6. Insertion sort in descending order" << endl;

        cin >> ch;
        switch (ch){
            case 1:
                bubbleSort(arr, length, 0);
                cout << "After sorting" << endl;
                printVector(arr, length);
                break;

            case 2:
                bubbleSort(arr, length, 1);
                cout << "After sorting" << endl;
                printVector(arr, length);
                break;

            case 3:
                selectionSort(arr, length, 0);
                cout << "After sorting" << endl;
                printVector(arr, length);
                break;

            case 4:
                selectionSort(arr, length, 1);
                cout << "After sorting" << endl;
                printVector(arr, length);
                break;

            case 5:
                insertionSort(arr, length, 0);
                cout << "After sorting" << endl;
                printVector(arr, length);
                break;

            case 6:
                insertionSort(arr, length, 1);
                cout << "After sorting" << endl;
                printVector(arr, length);
                break;

            default:
                cout << "Invalid input";
            }//End switch


    return 0;
}//End main()

void swap(int *_a, int *_b){
    int _temp = *_a;

        *_a = *_b;
        *_b = _temp;

}//End swap()

void printVector(int arr[], int length){

    for(int i = 0; i < length; i++)
        cout << arr[i] << " ";
}//End printVector()

void bubbleSort(int arr[], int length, bool type){
    //If type == 1: sort in ascending order
    //If type == 2: sort in descending order

    for(int i = 0; i < length - 1; i++){
        for(int k = 0; k < length-i-1; k++){
            if(type ? arr[k] < arr[k+1] : arr[k] > arr[k+1])
                swap(&arr[k], &arr[k+1]);

        }//End inner for loop k
    }//End outer for loop i

}//End bubbleSort()

void selectionSort(int arr[], int length, bool type){
    //if type == 0: ascending order
    //if type == 1: descending order

    int ele_idx;

        //shrink boundary with every step
        for(int i = 0; i < length-1; i++){
            ele_idx = i;

            for(int j = i+1; j < length; j++)
                if (type ? arr[j] > arr[ele_idx] : arr[j] < arr[ele_idx])
                    ele_idx = j;

            swap(&arr[ele_idx], &arr[i]);
        }//End outer for loop i

}//End selectionSort()


void insertionSort(int arr[], int length, bool type){

    int key;

        for(int i = 1; i < length; i++){
            key = arr[i];
            int j = i-1;

            while(j >= 0 && (type ? arr[j] < key : arr[j] > key)) {
                    arr[j+1] = arr[j];
                    j--;
            }//End while loop j
            arr[j+1] = key;

        }//End for loop i
}//End insertionSort()


//
// Created by rajat on 1/3/2019.
//

#include <iostream>
#include <vector>

using namespace std;

//function prototypes
void bubbleSort(vector<int> &myVector, bool type);
void selectionSort(vector<int> &myVector, bool type);
void swap(int *_a, int *_b);

int main(){

    vector<int> myVector;
    int length, input, ch, flag = 0;


        cout << "How many numbers do you wish to enter? ";
        cin >> length;

        //Take the input values from user
        cout << "Enter " << length << " numbers" << endl;
        for(int i = 0; i < length; i++){
            cin >> input;
            myVector.push_back(input);
        }//End for

        cout << "Select the operation you want" << endl
             << "1. Bubble sort in ascending order" << endl
             << "2. Bubble sort in descending order" << endl
             << "3. Selection sort in ascending order" << endl
             << "4. Selection sort in descending order" << endl;

        cin >> ch;
            switch (ch) {
                case 1:
                    bubbleSort(myVector, 0);
                    break;

                case 2:
                    bubbleSort(myVector, 1);
                    break;

                case 3:
                    selectionSort(myVector, 0);
                    break;

                case 4:
                    selectionSort(myVector, 1);
                    break;

                default:
                    cout << "Invalid input";
                    flag = 1;
            }//End switch



        //printing after sorting
        if(!flag) {
            cout << "After sorting: ";
            for (int i = 0; i < length; i++)
                cout << myVector[i] << " ";
        }//End if

    return 0;
}//End main()

void swap(int *_a, int *_b){
    int _temp = *_a;

        *_a = *_b;
        *_b = _temp;

}//End swap()

void bubbleSort(vector<int> &myVector, bool type){
    //If type == 1: sort in ascending order
    //If type == 2: sort in descending order

    int length = myVector.size();

    for(int i = 0; i < length - 1; i++){
        for(int k = 0; k < length-i-1; k++){
            if(type ? myVector[k] < myVector[k + 1] : myVector[k] > myVector[k + 1])
                swap(&myVector[k], &myVector[k + 1]);

        }//End inner for loop k
    }//End outer for loop i

}//End bubbleSort()

void selectionSort(vector<int> &myVector, bool type){
    //if type == 0: ascending order
    //if type == 1: descending order

    int length = myVector.size();
    int ele_idx;

        //shrink boundary with every step
        for(int i = 0; i < length-1; i++){
            ele_idx = i;

            for(int j = i+1; j < length; j++)
                if (type ? myVector[j] > myVector[ele_idx] : myVector[j] < myVector[ele_idx])
                    ele_idx = j;

            swap(&myVector[ele_idx], &myVector[i]);
        }//End outer for loop i

}//End selectionSort()




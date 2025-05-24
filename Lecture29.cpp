#include <iostream>
using namespace std;

int main(){
    //                                              jagged array :-

    int *jaggedarray[3];  // array containing 3 rows 
    // allocate memory for rows and assign their address to jaggedarray

    jaggedarray[0] = new int[2] {1,2};
    jaggedarray[1] = new int[3] {1,2,3};
    jaggedarray[2] = new int[4] {1,2,3,4};

    //taking output
    cout << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<i+2; j++) {
            cout << jaggedarray[i][j] << " ";
        } cout << endl;
    
    //releasing memory
    for(int i=0; i<3; i++) {
        delete [] jaggedarray[i];
    }  

    //                                                 2-D array :-
    int row;
    cin >> row;

    int col;
    cin >> col;

    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    //releasing memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }   

    delete []arr;

    //how to create a 2D array dynamically
    //input/Output
    //memory free kaise karani hai 

    return 0;
}


#include<iostream> 
#include<vector>
using namespace std; 

// making the search space smaller using the binary search 
bool searchMatrix(vector<vector<int> >& matrix, int target) {
    
    int row = matrix.size();
    int col = matrix[0].size();
    
    int rowIndex = 0;
    int colIndex = col-1;
    
    while(rowIndex < row && colIndex>=0 ) {
        int element = matrix[rowIndex][colIndex];
        
        if(element == target) {
            return 1;
        }
        
        if(element < target){
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return 0;
}

// sorted array using the binary search 
bool searchMatrix(vector<vector<int> >& matrix, int target) {
    
    int row = matrix.size();
    int col = matrix[0].size();
    
    int start = 0;
    int end  = row*col-1;
    
    int mid = start + (end-start)/2;
    
    while(start<=end) {
        
        int element = matrix[mid/col][mid%col];
        
        if(element == target) {
            return 1;
        }
        
        if(element < target) {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
         mid = start + (end-start)/2;    
    }
    return 0;
}

vector<int> spiralOrder( int matrix[][3]) {
        vector<int> ans;
        int row = 3;
        int col = 3;
        
        int count = 0;
        int total = row*col;
        
        //index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        
        while(count < total) {
            
            //print starting row
            for(int index = startingCol; count < total && index <= endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //print ending column
            for(int index = startingRow; count < total && index <= endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //print ending row
            for(int index = endingCol; count < total && index >= startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //print starting column
            for(int index = endingRow; count < total && index >= startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        } 
        return ans;
    }

void wavePrint(int ar[][4], int nRows, int mCols){
    
    for(int col=0; col<mCols; col++) {
        
        if( col&1 ) {
            //odd Index -> Bottom to top
            
            for(int row = nRows-1; row>=0; row--) {
                cout << ar[row][col] <<" ";
              //  ans.push_back(arr[row][col]);
            }    
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for(int row = 0; row<nRows; row++) {
                cout << ar[row][col] << " ";
               // ans.push_back(arr[row][col]);
            }
        }   
    }
}

bool isPresent(int arr[][3], int target, int row, int col) {

  for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            
            if( arr[row][col] == target) {
                return 1;
            }
            
        }
    }
    return 0;
}

//to print col wise sum
void printColSum(int arr[][4], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int col=0; col<4; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

//to print row wise sum
void printSum(int arr[][4], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<4; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

int largestRowSum(int arr[][3], int row, int col) {

    int maxi = INT16_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }

        if(sum > maxi ) {
            maxi = sum;
            rowIndex = row;
        }
       
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}

int main(){
    //create 2 d array
    int arr[3][3];

    cout << "Enter the elements " <<  endl;
    //taking input -> row wise input
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cin >> arr[row][col];
        }
    }

    cout << "Printing the array " << endl;
    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout <<" Enter the element to search " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 3)) {
        cout <<" Element found " << endl;
    }
    else{
        cout <<" Not Found" << endl;
    }
}

// remaing 90 degree rotate question 
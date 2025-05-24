#include<iostream>
using namespace std;

//                                           insertion sort                                                 //
void insertionSort(int n, vector<int> &arr, int i){
    
        if(n==0 || n==1)
        {
        return;
        }

        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
        }
        //copy temp value
        arr[j+1] = temp;  

        insertionSort(n,arr,i+1)

}

//                                           selection sort                                                 //
void selectionSort(int* arr, int n)
{
    if(n==0 || n==1)
    {
        return;
    }
    
    int min = INT_MAX;
    int inx = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
          inx = i;
        }
    }
    
    swap(arr[0],arr[inx]);
     
    
    selectionSort(arr+1,n-1);
}

//                                           bubble sort                                                 //
void sortArray(int *arr, int n) {

    //base case - already sorted
    if(n == 0 || n == 1) {
        return ;
    }

    //1 case sovle karlia - largest element ko end me rakh dega
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //Recursive Call
    sortArray(arr, n-1);

}

int power(int a, int b) {
    //base case
    if( b == 0 )
        return 1;

    if(b == 1)
        return a;

    //RECURSIVE CALL
    int ans = power(a, b/2);

    //if b is even
    if(b%2 == 0) {
        return ans * ans;
    }
    else {
        //if b is odd
        return a * ans * ans;
    }
}

void reverse(string& str, int i) {

    cout << "call recieved for " << str << endl;

    //base case
    int n = str.length();
    if(i>(n-i-1))
        return ;

    //processing 
    swap(str[i], str[n-i-1]);
    i++;

    //Recursive call
    reverse(str,i);

}

bool checkPalindrome(string str, int i, int  j) {

    //base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;

    else{
        //Recursive call
        return checkPalindrome(str, i+1,j-1);
    }
}

int main() {

    string name1 = "abcde";
    cout << endl;
    reverse(name1, 0);
    cout << endl;
    cout << name1 << endl;

    string name2 = "BookkooB";
    cout << endl;

    bool isPalindrome = checkPalindrome(name2, 0, name2.length()-1 );

    if(isPalindrome) {
        cout << "Its a Palindrome " << endl; 
    }
    else {
        cout << "Its not a Palindrome " << endl;
    }

    int a,b;
    cin >> a >> b;
    cout << endl;
    int ans = power(a,b);

    cout << "Answer is " << ans << endl;

    int arr[5] = {2,5,1,6,9};
    
    sortArray(arr,5);

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}

//  selection sort and insertion sort pending 
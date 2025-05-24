#include<iostream> 
using namespace std;

//                                            head recursion 
void print(int n) { 

    //base case 
    if(n == 0)
    return ;

    print(n-1);               //recursive relation

    cout << n << endl;           // processing 
}


//                                            tail recursion 
void print(int n) { 

    //base case 
    if(n == 0)
    return ;

    cout << n << endl;           // processing 

    print(n-1);               //recursive relation
}

int power(int n) {

    //base case 
    if(n == 0)
    return 1;

    //recursive relation
    int smallerProblem = power(n-1);   
    int biggerProblem = 3 * smallerProblem;

    return biggerProblem; 
}

int factorial(int n) {
    
    //base case :

    if(n==0)
    return 1;

    //recursive relation :

    int smallerProblem = factorial(n-1);   
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main() {

    int n;
    cin >> n;

//  int ans = factorial(n);
//  int ans = power(n);

//  cout << ans << endl;

    print(n);
}
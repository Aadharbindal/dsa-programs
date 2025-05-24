#include<iostream> 
using namespace std;

void reachHome(int src, int dest) {
    
cout << "source at " << src  << " destination is " << dest << endl;

//base case
if(src == dest) {
    cout << "source has been reached to the destination. " << endl;
    return ;
}

//processing - ek step aage badhjao
src++;

//recursive call
reachHome(src, dest);

}

void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;

    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int countDistinctWayToClimbStair(long long nStairs)
{
    //base case
    if(nStairs < 0)
        return 0;
    
    if(nStairs == 0)
        return 1;
    
    //R.C
    int ans1 = (countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2));
    
    return ans1;
}

int fib(int n) {
    // base case 
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }

    // recursice relation 
    else{
    int ans2 = (fib(n-1) + fib(n-2));

    return ans2;
    }
    
}

int main() {

int dest = 10;
int src = 1;

cout << endl;

reachHome(src, dest);

// int p;
// cin>>p;

// int answer1 = fib(p);
// cout << answer1 << endl;

// int answer2 = countDistinctWayToClimbStair(p);
// cout << answer2 << endl;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;

    return 0;
}
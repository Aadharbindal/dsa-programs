#include<iostream>
#include<vector>
using namespace std;

int fastExpo(int a, int b ) {

    int res = 1;

    while(b > 0) {

        if(b&1) {
            //odd
            res = res*a;
        }
        b = b >> 1;        // b = b/2
        a = a * a; 
    }
    return res;
}

//                                         GREATEST COMMON FACTOR 

int gcd(int a, int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

bool isPrime(int n) {

    if(n<=1)
    return false;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

//                                                      SIEVE 

int countprime(int n){
    int cnt = 0;
    vector<bool> prime(n+1,true);

    prime[0]=prime[1]= false;

    for(int i = 2; i<n; i++){
        if(prime[i]){
           cnt++;
        }
        for(int j=2*i; j<n; j=j+i){
            prime[j]=false;
        }
    }
    return cnt;
}

int main(){

}

// remaining segmented sieve 
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){

//                  ------------:::::::::::::CONVERT DECIMAL TO BINARY:::::::::::::-----------
//                                                 positive number 

//    int n;
//    cin>>n;

//    int i = 0, ans = 0;

//    while(n!=0){

//     int bit = n&1;
//     ans = (bit * pow( 10 , i) ) + ans;         // (FORMULA) for getting binary value of a decimal.
//     n = n >> 1;
//     i++;
//    }

//    cout<<ans;

//      formula for exact printing the number without reversing is :---
//         ans = (ans * 10) + digit 

//      formula for reversing the number is :---
//         ans = (digit * pow(10,i)) + ans  

//                  ------------:::::::::::::CONVERT BINARY TO DECIMAL:::::::::::::-----------

//   int n;
//   cin>>n;

//    int ans = 0;
//    int i = 0;

//    while(n!=0){

//     int digit = n % 10;
//     if(digit==1){
//         ans = ans + pow(2,i);
//     }
//     n = n/10;
//     i++;
//    }
//    cout<<ans;
// }

//                  ------------:::::::::::::CONVERT NEGATIVE DECIMAL TO BINARY :::::::::::::-----------

//     int n;
//     cin>>n;

//     int i = 0;
//     float ans  = 0;

//     int r = 1 +(~n);  //-n bhi likh skte hai
        

//     while(r!=0){
        
//        int bit = r&1; //checks lsb and stores it in ans
//        ans = (bit * pow(10,i)) + ans;
       
//        r = r>>1;
//        i++;
//     }

//     cout<<ans;
//     return 0;
// }


//  #include<iostream>
//  using namespace std;

// //                                                FUNCTIONS

//     int setbit_number(int a , int b){
//         int count = 0;
//         int num = 0;
//         while(a!=0){
//             count += a&1;
//                 a = a>>1;
//             }
//         while(b!=0){
//                 num+=b&1;
//                 b = b>>1;
//         }
//         cout<<(count+num);
//         return (count+num);
//     }

//     void AP(int n){
//         int value = (3*n)+7;
//         cout<< value;
//     }

//     void fibbo(int n)
// {
//     int a=0 , b=1 , c;
//     cout<<a<<" "<<b<<" ";
//     for(int i=1 ; i<n-1 ; i++)
//     {      
//         c=a+b;
//         cout<<c<<" ";
//         a=b;
//         b=c;
//     }
// }

//     bool Isprime(int n){
//       for(int i = 2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
//     }

//     void oddeven(int a){
//         if(a%2==0){
//             cout<<"the number is even "<<endl;
//         }
//         else{
//             cout<<"the number is odd "<<endl;
//         }
//     }

//     int factorial(int n){
//         int fact = 1;
//         for(int i=1; i<=n; i++){
//             fact = fact*i;
//         }
//         return fact;
//     }

//     int nCr(int n , int r){
//         int ans = factorial(n)/(factorial(r)*factorial(n-r));
//         return ans;
//     }

//     int power(int a, int b){

//     int ans = 1;
//     for(int i=0; i<b; i++){
//         ans = ans*2;
//     }
//     return ans;
//    }

// int main(){

//                      -------::::::::::::::::::::SWITCH CASES::::::::::::::::::::--------
   
//    int num = 1;
//    switch(num){
//     case 1: cout<<"first"<<endl;
//     break;    // break is used to exit the switch loop if i do not use it then next all statement will print.

//     case 2: cout<<"second"<<endl;
//     break;

//     default: cout<<"default"<<endl;
//    }

//                                   :::::::::::::::CALCULATOR::::::::::::::::

//    int a;
//    cout<<"enter the value of a :"<<endl;
//    cin>>a;

//    int b;
//    cout<<"enter the value of b :"<<endl;
//    cin>>b;

//    char op;
//    cout<<"enter the operation :"<<endl;
//    cin>>op;

//    switch(op){

//     case '+': cout<<(a+b)<<endl;
//     break;

//     case '-': cout<<(a-b)<<endl;
//     break;

//     case '*': cout<<(a*b)<<endl;
//     break;

//     case '/': cout<<(a/b)<<endl;
//     break;

//     default : cout<<"the operation is not valid "<<endl;
//    }
//    return 0;

//                                :::::::::::::NUMBER OF NOTES REQUIRED::::::::::::: 

    // int amount;
    // cout<<"Enter the Amount : "<<endl;
    // cin>>amount;

    // int note = 0;
    // switch (1){
    //     case 1: {
    //         note = amount/100;
    //         cout<<note<<" Rs.100 notes requied."<<endl;
    //         amount = amount - (100 * note);
    //     }
    //     case 2:{
    //         note = amount/50;
    //         cout<<note<<" Rs.50 notes requied."<<endl;
    //         amount = amount - (50 * note);
    //     }
    //     case 3:{
    //         note = amount/20;
    //         cout<<note<<" Rs.20 notes requied."<<endl;
    //         amount = amount - (20 * note);
    //     }
    //     case 4:{
    //         note = amount/1;
    //         cout<<note<<" Rs.1 notes requied."<<endl;
    //         amount = amount - (1 * note);
    //     }
    //     return 0;
//    }

//                                             USES OF FUNCTIONS 

    // int num1 , num2;
    // cin>>num1>>num2;
    // int ans = power(num1,num2);
    // cout<<"Answer is : "<<ans<<endl;
    // return 0;

    // int a;
    // cin>>a;
    // oddeven(a);
    // return 0;

    // int n,r;
    // cin>>n>>r;
    // cout<<nCr(n,r)<<endl;
    // return 0;

//                                            PRIME NUMBER OR NOT

//    int n;
//    cin>>n;
//    if(Isprime(n)){
//     cout<<"is prime number"<<endl;
//    }
//    cout<<"is not a prime number"<<endl;

//                                               FIBONACCI SERIES 
    // int n;
    // cin>>n;
    // fibbo(n);  

    // int n;
    // cin>>n;
    // AP(n);  

//                                                   SETBIT NUMBERS 

    // int a , b;
    // cin>>a>>b;
    // setbit_number(a,b);
//}

// int main(){
//     int n,m;
//     cin>>n;
//     cout<<"enter the note"<<endl;
//     cin>>m;

//     switch(m){

//         case 100: cout<<"number of 100 notes are "<<endl;
//                   int ans1 = n/100;
//                   cout<<ans1<<endl;
//                   break;
//         case 50: cout<<"number of 100 notes are "<<endl;
//                   int ans2 = n-ans1*100;
//                   int ans21 = ans2/50;
//                   cout<<ans21<<endl;
//                   break;
//         case 20: cout<<"number of 100 notes are "<<endl;
//                   int ans3 = n-ans1*100;
//                   int ans31 = ans3/30;
//                   cout<<ans31<<endl;
//                   break;
//     }
//     return 0;
// }
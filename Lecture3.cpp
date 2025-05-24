#include<iostream>
using namespace std;
int main(){

//                       ---------------If-else conditional statements--------------

   int a;
   cin>>a;                                      // cin do not read spacebar , enter , tab
// if a is positive 
   if(a>0){
    cout<<"a is positive"<<endl;
   }   
   else{
    cout<<"a is negative"<<endl;
   }
         
//                    ---------------If- else if- else conditional statements-------------- 

   int a;
   cin>>a;
// if a is positive 
   if(a>0){
    cout<<"a is positive"<<endl;
   }   
   else if(a<0){
    cout<<"a is negative"<<endl;
   }
   else{
    cout<<"a is zero"<<endl;
   }

//                                                  EG (1):-

   int a = 9;
   if(a==9){
    cout<<"niney"<<endl;
   }
   if(a>0){
    cout<<"positive"<<endl;                     // RUN => nineypositive
   }
   else{
    cout<<"negative"<<endl;
   }

//                                                  EG (2):-

   int a = 34;
   if(a>30){
    cout<<"LOVE"<<endl;
   }
   else if(a == 34){                           // RUN => LOVE
    cout<<"LOVELY"<<endl;
   }
   else{
    cout<<"Aadhar"<<endl;
   }

//                                                 While-Loop :-
   int n;
   cin>>n;

   int i = 1;
   while(i<=n){                               // RUN => 1 to N numbers 
    cout<<i<<" ";
    i = i+1;
   }

//                                                    EG (1):- sum of n numbers 
   int n,i,sum;
   cin>>n;
   sum = 0;
   i = 1;
   while(i<=n){                              // RUN => Sum of n numbers  
    sum = sum + i;
    i = i + 1;
   }
   cout<<"the value of sum is :"<<sum<<endl;

//                                                     EG (2):- sum of n even numbers 
   int n,i,sum;
   cin>>n;
   sum = 0;
   i = 2;
   while(i<=n){                              // RUN => Sum of n even numbers 
    if(i%2==0){
       sum = sum + i;
    } 
    i = i + 1;
   }
   cout<<"the value of sum is :"<<sum<<endl;
   return 0;

//                                                    EG (3):- prime number or not 
   int n;
   cin>>n;

   int i = 2;
   while(i<n){                             
    if(n%i==0){                                        // RUN => not prime numbers 
        cout<<"not prime for "<<i<<endl;
    }
    else{
        cout<<"prime for "<<i<<endl;
    }
    i = i+1;
   }
    return 0;

//                                             Pattern printing:-
   
   int n;
   cin>>n;
   int i = 1;

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=n){                                    
        cout<<"*";
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                 EG (1):-
   int n;
   cin>>n;
   int i = 1;

   while(i<=n){

    int j = 1;
    while(j<=n){
        cout<<i;
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;
}
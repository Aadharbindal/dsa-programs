#include<iostream>
using namespace std;

int main(){

//                 ------------------------pattern printing:----------------------------

    int n;
   cin>>n;
   int i = 1;

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=n){                                    
        cout<<j<<" ";
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                  EG (1):-

   int n;
   cin>>n;
   int i = 1;

   while(i<=n){                                   
                                                  
    int j = 4;                                      
    while(j>=1){                                    
        cout<<j<<" ";           // or we can use previous code and use n-j+1 instead of j
        j = j-1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                 EG (2):-

   int n;
   cin>>n;
   int i = 1;
   int count = 1;

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=n){                                    
        cout<<count<<" ";
        count = count + 1;
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                 EG (3):-

   int n;
   cin>>n;
   int i = 1;

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=i){                                    
        cout<<"*";
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                 EG (4):-

   int n;
   cin>>n;
   int i = 1;

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=i){                                    
        cout<<i<<" ";
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                 EG (5):-

   int n;
   cin>>n;
   int i = 1;
   int count = 1;

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=i){                                    
        cout<<count<<" ";
        count = count + 1;
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                EG (6):-

   int n;
   cin>>n;
   int i = 1;
   while(i<=n){                                   
    int count = i;                                  
    int j = 1;                                      
    while(j<=i){                                    
        cout<<count<<" ";
        count = count + 1;
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                 EG (7):-

   int n;
   cin>>n;
   int i = 1;
   while(i<=n){                                   
        int count = i;                                      
    int j = 1;                                      
    while(j<=i){                      // or we can use previous code and use i-j+1 instead of count 
        cout<<count<<" ";
        count = count -1;
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                 EG (8):-

   int n;
   cin>>n;
   int i = 1;
   char ch = 'A';

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=n){                                       // we can use ('A'-i+1) instead of char ch 
        cout<<ch<<" ";
        j = j+1;
    }
    cout<<endl;                  // enter 
    ch = ch + 1;
    i = i+1;
   }
  return 0;

//                                                 EG (9):-

   int n;
   cin>>n;
   int i = 1;

   while(i<=n){  
    char ch = 'A';                                                                                         
    int j = 1;                                      
    while(j<=n){                                   
        cout<<ch<<" ";
        j = j+1;
        ch = ch + 1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                EG (10):-

   int n;
   cin>>n;
   int i = 1;

   while(i<=n){                                                                                           
    int j = 1;                                      
    while(j<=n){          
        char ch = 'A'+i+j-2;
        cout<<ch<<" ";
        j = j+1;
    }
    cout<<endl;                 // enter                   
    i = i+1;
   }
   return 0;

//                                                EG (11):-
   int n;
   cin>>n;
   int i = 1;
   char ch = 'A';

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=i){                                          // we can use ('A'+i-1) instead of char ch
        cout<<ch<<" ";
        j = j+1;
    }
    cout<<endl;                  // enter 
    ch = ch + 1;
    i = i+1;
   }
  return 0;

//                                                EG (12):-
   int n;
   cin>>n;
   int i = 1;
   char ch = 'A';

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=i){                                        
        cout<<ch<<" ";
        ch = ch + 1;
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
  return 0;

//                                                 EG (13):-

   int n;
   cin>>n;
   int i = 1;

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=i){        
        char ch = 'A'+i+j-2;                            
        cout<<ch<<" ";
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                 EG (14):-

   int n;
   cin>>n;
   int i = 1;

   while(i<=n){                                   
                                                  
    int j = 1;                                      
    while(j<=i){         
        char ch = 'D'-i+j;                            // 'D'-i+j == 'A'+n-i and ch = ch + 1       
        cout<<ch<<" ";
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                                 EG (15):-

   int n;
   cin>>n;
   int i = 1;

   while(i<=n){                                   
    int space = n - i;
    while(space){
        cout<<" ";
        space = space - 1;
    }
    int j = 1;
    while(j<=i){
        cout<<"*";
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
  return 0;

//                                                EG (16):-

   int n;
   cin>>n;
   int i = 1;
   while(i<=n){                                   
    int j = 1;
    while(j<=n-i+1){
        cout<<"*";
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
   return 0;

//                                   *************EG (17):-************  IMP->

   int n;
   cin>>n;
   int i = 1;

   while(i<=n){ 
    int space = 0;                                  
    while(space<=i){
        cout<<" ";
        space = space + 1;
    }
    int j = 1;
    while(j<=n-i+1){
        cout<<"*";
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
  return 0;

//                                  *************EG (18):-************  IMP->

   int n;
   cin>>n;
   int i = 1;

   while(i<=n){ 
    int space = 0;                                  
    while(space<=i){
        cout<<" ";
        space = space + 1;
    }
    int j = 1;
    while(j<=n-i+1){
        cout<<i;
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
  return 0;

//                                   *************EG (19):-************  IMP->

   int n;
   cin>>n;
   int i = 1;
   int num = 1;
   while(i<=n){ 
    int space = 1;                                  
    while(space<=n-i){
        cout<<" ";
        space = space + 1;
    }
    int j = 1;
    while(j<=i){
        cout<<num;
        num = num + 1;
        j = j+1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
  return 0;

//                                  *************EG (20):-************  IMP->

   int n;
   cin>>n;
   int i = 1;
   while(i<=n){ 
    int space = 1;                                  
    while(space<=n-i){
        cout<<" ";
        space = space + 1;
    }
    int j = 1;
    while(j<=i){
        cout<<j;
        j = j+1;
    }
    int count = i-1; 
    while(count){
        cout<<count;
        count = count - 1;
    }
    cout<<endl;                  // enter 
    i = i+1;
   }
  return 0;

//                                   *************EG (21):-************  V.IMP-> DABANG PATTERN 

   int n;
   cin>>n;
   int i =1;
   while(i<=n){
    int j = 1;
    while(j<=n-i+1){
        cout<<j;
        j = j + 1;
    }
    int count = 1;
    while(count<=i-1){
        cout<<"*";
        count = count + 1;
    }
    int start = 1;
    while(start<=i-1){
        cout<<"*";
        start = start + 1;
    }
    int num = 1;
    int point = 5-i+1;
    while(num<=n-i+1){
        cout<<(point);
        point = point - 1;
        num = num + 1;
    }
    cout<<endl;
    i = i + 1;
   }
   return 0;
}
// #include<iostream>
// using namespace std;

// //                                                INSERTION SORT 

// void insertionSort(int n, int arr[]){
    
//     for(int i = 1; i<n; i++) {
//         int temp = arr[i];
//         int j = i-1;
//         for(; j>=0; j--) {
            
//             if(arr[j] > temp) {
//                 //shift
//                 arr[j+1] = arr[j];
//             }
//             else { // ruk jao
//                 break;
//             }
            
//         }
//         //copy temp value
//         arr[j+1] = temp;  
//     } 
// }

// int main(){
//     int arr[] = {2,5,4,6,3};
// //  cout<<insertionSort(5, arr)<<endl;
//     return 0;
// }
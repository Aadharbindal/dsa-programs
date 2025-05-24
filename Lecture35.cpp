#include<iostream>
using namespace std;

// void merge(int *arr, int s, int e) {

//     int mid = (s+e)/2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     //copy values
//     int mainArrayIndex = s;
//     for(int i=0; i<len1; i++) {
//         first[i] = arr[mainArrayIndex++];
//     }

//     mainArrayIndex = mid+1;
//     for(int i=0; i<len2; i++) {
//         second[i] = arr[mainArrayIndex++];
//     }

//     //merge 2 sorted arrays     
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;

//     while(index1 < len1 && index2 < len2) { 
//         if(first[index1] < second[index2]) {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }   

//     while(index1 < len1) {
//         arr[mainArrayIndex++] = first[index1++];
//     }

//     while(index2 < len2 ) {
//         arr[mainArrayIndex++] = second[index2++];
//     }

//     delete []first;
//     delete []second;

// }

    long merge1(int arr[] , long s , long e){
        long ans = 0;

        int mid = (s + e)/2;

        int l1 = mid - s + 1;
        int l2 = e - mid;

        int *a1 = new int[l1];
        int *a2 = new int[l2];

        int idx = s;

        //copy elements
        for(int i = 0; i < l1; i++){
            a1[i] = arr[s+i];
        }

        for(int i = 0; i < l2; i++){
            a2[i] = arr[mid+i+1];
        }

        int idx1 = 0;
        int idx2 = 0;
        while(idx1 < l1 && idx2 < l2){
            //check for inversions

            if(a1[idx1] > a2[idx2]){
                ans += l1-idx1;
                arr[idx++] = a2[idx2++];
            }
            else {
                arr[idx++] = a1[idx1++];
            }
        }

        while(idx1 < l1){
            arr[idx++] = a1[idx1++];
        }
        while(idx2 < l2){
            arr[idx++] = a2[idx2++];
        }

        return ans;
    }

//                                           merge sort 

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}


//                                        inversion count by shraddha didi's video 
long count(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return 0;
    }
    
    int mid = (s+e)/2;
    long inv = 0;
    inv += count(arr , s , mid);               // count have 2 conditions :- (i < j) and (arr[i] > arr[j])
    inv += count(arr , mid + 1 , e);
    inv += merge1(arr , s , e);
    
    return inv;
}

int main() {

    int arr[8] = {3,5,6,9,1,2,7,8};
    int n = 8;

    // mergeSort(arr, 0, n-1);

    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // } cout << endl;

    count(arr, 0, n-1);

    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // } cout << endl;

    cout<<count(arr, 0, n-1)<<endl;

    return 0;
}


// inversion count pending 
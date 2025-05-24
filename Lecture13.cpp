// #include<iostream>
// #include<vector>
// using namespace std;

//                                           peakIndexMountainArray

// int peakIndexMountainArray(int arr[], int n) {

//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {
//         if(arr[mid] < arr[mid+1])
//         {
//             s = mid+1;             // here is not any problem with start that's why we take s = mid+1 .
//         }
//         else{                      // in 2nd slope (e) and mid could be at peak of the mountain .
//             e = mid;               // here is a problem with end (e) that's why we take e = mid .
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }


//                               TOTAL NUMBER OF OCCURENCES 
// find first and last occurence and then 
// total no. of occurence = (last-first)occurence index + 1

//                                        FIRST AND LAST OCCURENCE 

//     int firstOcc(int arr[], int n, int key) {
//     int s = 0, e = n-1;
//     int mid = s + (e-s)/2;
//     int ans1 = -1;
//     while(s<=e) {

//         if(arr[mid] == key){
//             ans1 = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]) {//Right me jao
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {//left me jao
//             e = mid - 1;
//         }

//         mid = s + (e-s)/2;
//     }
//     return ans1;
// }
//     int lastOcc(int arr[], int n, int key) {
//     int s = 0, e = n-1;
//     int mid = s + (e-s)/2;
//     int ans2 = -1;
//     while(s<=e) {

//         if(arr[mid] == key){
//             ans2 = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]) {//Right me jao
//             s = mid + 1;
//         }
//         else{//left me jao
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans2;
// }

// int main(){
//    int arr[5] = {2,4,8,8,12};

//    cout<<"first occ at index "<<firstOcc(arr, 5, 8)<<endl;;
//    cout<<"last occ at index "<<lastOcc(arr, 5, 8)<<endl;

//    int totalocc;
//    totalocc = (lastOcc(arr,5,8) - firstOcc(arr,5,8)) + 1;
//    cout<<totalocc<<endl;

//    return 0;
// }
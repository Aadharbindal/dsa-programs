// #include<iostream>
// #include<vector>
// using namespace std;

// bool isPossible(int arr[], int n, int m, int mid){ 
//     int studentCount = 1;
//     int i = 0;
//     int pageSum = 0;
//     //cout << "checking for mid "<< mid <<endl;
//     for(int i = 0; i<n; i++) {
//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid ) {
//             return false;
//         }
//             int pagesum = 0;
//             pageSum += arr[i];
//         }
//         //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
//     }
//     return true;
// }

// int allocateBooks(int arr[], int n, int m) {
//     int s = 0;
//     int sum = 0;
//     int i = 0;
//     for(int i = 0; i<n; i++) {
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s<=e)
//     {
//         if(isPossible(arr,n,m,mid)) {
//             //cout<<" Mid returned TRUE" << endl;
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// bool isPossible(int stalls[], int k, int mid, int n) {
    
//     int cowCount = 1;
//     int lastPos = stalls[0];
    
//     for(int i=0; i<n; i++ ){
        
//         if(stalls[i]-lastPos >= mid){
//             cowCount++;
//             if(cowCount==k)
//             {
//                 return true;
//             }
//             lastPos = stalls[i];
//         }
//     }
//     return false;
// }

// int aggressiveCows(int stalls[], int k)
// {
// //  sort(stalls.begin(), stalls.end());
//    	int s = 0;
//     int n = 5;     
//     int e = stalls[n-1];
//     int ans = -1;
//     int mid = s + (e-s)/2;

//     while(s<=e) {
//         if(isPossible(stalls, k, mid, n)) {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int main(){
//    int arr[5] = {1,2,3,4,5};
//    int n;
// // allocateBooks(arr,5,2);
//    int stalls[5] = {1,2,3,4,5};
//    aggressiveCows(stalls,2);
//    return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;

/*********************************************** SORT012 ************************************************/

// class Solution
// {
// public:
// void sort012(int a[], int n) {

// int zero=0, one=0, two=0; 
// for(int i=0;i<n;i++) {
// if(a[i]==0)
// zero++;

// if(a[i]==1)
// one++;

// if(a[i]==2)
// two++;
// }

// for(int i=0;i<zero; i++){
// a[i] = 0;
// } 

// for(int i=zero;i<zero+one;i++){
// a[i]=1;
// } 

// for (int i=zero+one;i<n;i++){
// a[1]=2;
// }
// }
// };

/*************************************** UNIQUE OCCURENCES ******************************************/

// class Solution {
//     public:
//         bool uniqueOccurrences(vector<int>& arr) {
//             int i = 0;
//             sort(arr.begin(),arr.end());
//             vector<int> ans;
//             while (i < arr.size()){
//                 int count = 1;
//                 for (int j = i+1; j< arr.size(); j++){
//                     if (arr[i] == arr[j])
//                         count++;
//                 }
//                 ans.push_back(count);
//                 i = i + count;
//             }
//             sort(ans.begin(),ans.end());
//             for (int i = 0; i < ans.size() - 1; i++){
//                 if (ans[i] == ans [i+1])
//                     return false;
//             }
//             return true;
//         }
//     };

// void sort012(int arr[], int n) {

//     int low = 0, mid = 0, high = n-1;
//     while(mid<=high){

//         if(arr[mid] == 0) {

//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }

//         else if(arr[mid] == 1){
//             mid++;
//         }

//         //agar yha pohoch gye ho, iska matlab

//         else
//         {
//             swap(arr[mid], arr[high]);
//             high--;   
//         }
//     }
// }

// void sortOne(int arr[], int n) {

//     int left = 0, right = n-1;

//     while(left < right) {

//         while(arr[left] == 0 && left < right )  {
//             left++;
//         }

//         while(arr[right]==1 && left < right){
//             right--;
//         }

//         //agar yha pohoch gye ho, iska matlab
//         //arr[left]==1 and arr[right]==0
//         if(left<right)
//         {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }

// }

// vector<vector<int> > pairSum(vector<int> &arr, int s){
//    vector< vector<int> > ans;
   
//    for(int i=0;i<arr.size(); i++ )
//    {
//    		for(int j = i+1; j<arr.size(); j++) {  
//         	if(arr[i] +arr[j] == s)
//             {
//             	vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
// 				ans.push_back(temp);
//             }
//         }
//    }
// //   sort(ans.begin(), ans.end());
//    return ans;
// }

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	int i = 0, j = 0;
//     vector<int> ans;
//     while(i<n && j<m) {
    
//     if(arr1[i]==arr2[j])
//     {
//     	ans.push_back(arr1[i]);
//         i++;
//         j++;
//     }
//     else if (arr1[i] < arr2[j]) {
//   		i++;
//     }
//     else
//     {
//     	j++;
//     }
    
//     }
//     return ans;
// }

// vector<int> findArrayUnion(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	int i = 0, j = 0;
//     vector<int> ans;
//     while(i<n || j<m) {
    
//     if(arr1[i]==arr2[j])
//     {
//     	ans.push_back(arr1[i]);
//         i++;
//         j++;
//     }
//     else if (arr1[i] != arr2[j]) {
//      ans.push_back(arr1[i]);
//      ans.push_back(arr1[j]);
//   		i++;
//          j++;
//     }
//    }
//     return ans;
// }

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>  & nums) {
//         vector<int> result;
//         //Write your code here
//     for(int i = 0; i < nums.size(); i++) {
//         for(int j = i+1; j < nums.size(); j++) {
//             if(nums[i] == nums[j]) {
//                 result.push_back(nums[i]);
//             }
//         }
//     }
//     return result;
//     }
// };

// int findDuplicate(vector<int> &arr) 
// {
//     int ans = 0;
    
//     //XOR ing all array elements
//     for(int i = 0; i<arr.size(); i++ ) {
//     	ans = ans^arr[i];
//     }
	
//     //XOR [1, n-1]
//     for(int i = 1; i<arr.size();i++ ) {
//     	ans = ans^arr[i];
//     }
//     return ans;
// }

// int findUnique(int arr[], int size)
// {
//    	int ans = 0;
    
//     for(int i = 0; i<size; i++) {
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// (Brute force approach ):
// int findUnique(int *arr, int size)
// {
//     //Write your code here
//     for(int i = 0; i < size; i++) {
//         int count = 0;
//         for(int j = 0; j < size; j++) {
//             if(arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if(count == 1) {
//             return arr[i];
//         }
//     }
//     return -1;
// }

// void swapAlternate(int arr[], int size) {

//     for(int i = 0; i<size; i+=2 ) {
//         if(i+1 < size) {
//             swap(arr[i], arr[i+1]);
//         }
//     }

// }

// void printArray(int arr[], int size) {

//     cout<< " printing the array " << endl;
//     //print the array
//     for(int i =0; i<size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout<<endl; 
// }

// int main(){

    // int even[8] = {5,2,9,4,7,6,1,0};
    // int odd[5] = {11, 33, 9, 76, 43};

    // swapAlternate(even, 8);
    // printArray(even, 8);

    // cout << endl;

    // swapAlternate(odd, 5);
    // printArray(odd, 5);

    // int arr[5]={1,1,2,2,3};
    // cout<<findUnique(arr,5)<<endl;

    // int arr[8] = {1,1,0,0,0,0,1,0};

    // sortOne(arr, 8);
    // printArray(arr, 8);

//     int arr[8] = {1,1,0,0,0,0,2,2};

//     sort012(arr, 8);
//     printArray(arr, 8);

//    return 0;
// }
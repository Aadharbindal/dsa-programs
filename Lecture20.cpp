#include<iostream>
#include<vector>
using namespace std;

//                                           MERGE SORT ARRAY within nums1

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int i=0, j=0, k=0;
            vector<int> nums3;
            while(i<m && j<n){
                if(nums1[i]<=nums2[j]){
                    nums3.push_back(nums1[i]);
                    i++;
                }
                else{
                    nums3.push_back(nums2[j]);
                    j++;
                }
                k++;
            }
            
            while(i<m){
                nums3.push_back(nums1[i]);
                i++;
            }
    
            while(j<n){
                nums3.push_back(nums2[j]);
                j++;
            }
            // cout << nums1.size();
    
            nums1 = nums3;
        }
    };

//                                           MERGE SORT ARRAY 
//                   two pointer approach 
void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

    int i = 0, j = 0;
    int k = 0;
    while( i<n && j<m) {
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    //copy first array k element ko
    while(i<n) {
        arr3[k++] = arr1[i++];
    }

    //copy kardo second array k remaining element ko
    while(j<m) {
        arr2[k++] = arr2[j++];
    }
}

void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}

int main() {

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);


    return 0;
}

//                                                 REVERSE ARRAY 

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v) {

    int s = 0, e =v.size()-1;

    while(s<=e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;

}

void print(vector<int> v) {

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> v ;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverse(v);

    cout << "Printing reverse Array" <<endl;
    print(ans);


    return 0;
}

//                                        shift nonzero elements 

class Solution {
    public: 
    void movezeroes(vector<int>& nums){

        int i = 0;

        for(int j=0; j<nums.size(); j++){

            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;

            }
        }
    }
};
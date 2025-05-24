#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int> >& ans) {
        //base case
        if(index >= nums.size()) {
            ans.push_back(output);
            return ;
        }
        
        //exclude
        solve(nums, output, index+1, ans);
        
        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
        
    }

    void solve(vector<string>& ans, string str, string output, int i) {
        //base case
        if(i >= str.length()) {
            if(output.length()>0)
            ans.push_back(output);
            return ;
            }
        
        //exclude
        solve(ans, str, output, i+1);

        //include
        char element = str[i];
        output.push_back(element);
        solve(ans, str, output, i+1);
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
        
    }

    vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
    }
};

int main(){
   
   return 0;
}

// bit manipulation pending 
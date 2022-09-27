#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(i==j){
                continue;
            }
            else if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {2,4,7,15};
    vector<int> var = twoSum(nums,9);
    for(auto i : var) cout<<i;
    return 0;
}

// https://leetcode.com/problems/two-sum/

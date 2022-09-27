#include<iostream>
#include<vector>
using namespace std;

int countKDifference(vector<int>& nums, int k){
    int count=0;
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(i==j){
                continue;
            }
            else if(nums[i]-nums[j]==k || nums[i]-nums[j]==-k ){
                count++;
            }
        }
    }
    return count/2;
}

int main(){
    vector<int> nums = {3,2,1,5,4};
    cout<<countKDifference(nums,2);
    return 0;
}

// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
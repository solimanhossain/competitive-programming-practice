#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val){
    int counts = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]!=val) nums[counts++] = nums[i];
    }
    return counts;
}

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    cout<<removeElement(nums,2);
    for(auto element : nums) cout<<"\t"<<element;
    return 0;
}

// https://leetcode.com/problems/remove-element/
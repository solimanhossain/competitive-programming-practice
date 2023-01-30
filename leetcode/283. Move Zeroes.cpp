#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){
    int size = nums.size();
    for(int i=0; i<size; i++){
        cout<<nums[i];
        if(nums[i]==0){
            nums.push_back(0);
            nums.erase(nums.begin()+i);
            size--;
            i--;
        }
    }
}

int main(){
    vector<int> nums = {0,0,1};
    moveZeroes(nums);
    for(auto &i : nums) cout<<i;
    return 0;
}

// https://leetcode.com/problems/move-zeroes/solution/
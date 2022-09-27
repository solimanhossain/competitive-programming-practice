#include<iostream>
#include<vector>

std::vector<int> shuffle(std::vector<int>& nums, int n){
    std::vector<int> temp;
    for(int i=0; i<n; i++){
        temp.push_back(nums[i]);
        temp.push_back(nums[n+i]);
    }
    return temp;
}

int main(){ 
    std::vector<int> nums = {1,2,3,4,4,3,2,1};
    std::vector<int> x = shuffle(nums,4);
    for(auto i:x) std::cout<<i<<"\t";
    return 0;
}

// https://leetcode.com/problems/shuffle-the-array/
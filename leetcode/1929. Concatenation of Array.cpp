#include<iostream>
#include<vector>

std::vector<int> getConcatenation(std::vector<int>& nums) {
    int size = nums.size();
    for(int i=0; i<size; i++){
        nums.push_back(nums[i]);
    }
    return nums;
}

int main(){
    std::vector<int> nums = {1,2,3};
    std::vector<int> con = getConcatenation(nums);
    for(auto i:con) {std::cout<<i<<"\t";}
    return 0;
}

// https://leetcode.com/problems/concatenation-of-array/
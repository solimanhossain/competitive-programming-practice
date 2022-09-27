#include<iostream>
#include<algorithm>
#include<vector>

int removeDuplicates(std::vector<int>& nums) {
    std::sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]==nums[j]){
                nums.erase(nums.begin()+j);
                j--;
            }
        }
    }
    return nums.size();
}

int main(){
    std::vector<int> nums = {1,1,2};
    std::cout<<removeDuplicates(nums);
    return 0;
}

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
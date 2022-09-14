#include<iostream>
#include<vector>

int singleNumber(std::vector<int>& nums){
    int ans=0;  
    for(auto i : nums) ans^=i;
    return ans;
}

int main(){
    std::vector<int> nums = {2,2,1};
    std::cout<<singleNumber(nums);
    return 0;
}
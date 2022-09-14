#include<iostream>
#include<vector>

std::vector<int> runningSum(std::vector<int>& nums) {
    std::vector<int> sum;
    for(int i=0; i<nums.size(); i++){
        int temp=0;
        for(int j=0; j<=i; j++){
            temp+=nums[j];
        }
        sum.push_back(temp);
    }
    return sum;
}

int main(){
    std::vector<int> nums = {1,1,1,1,1};
    std::vector<int> sum = runningSum(nums);
    for(auto i:sum) {std::cout<<i<<"\t";}
    return 0;
}
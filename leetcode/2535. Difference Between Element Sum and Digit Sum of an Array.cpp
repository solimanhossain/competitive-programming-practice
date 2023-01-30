#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0;
        int digit_sum = 0;
        for(auto i: nums){
            int temp = i;
            element_sum += i;
            while(temp){
                digit_sum += temp % 10;
                temp /= 10;
            }
        }
        return abs(element_sum-digit_sum);
    }
};

int main(){
    Solution leetcode;
    vector<int> nums = {1, 15, 6, 3};
    cout<<leetcode.differenceOfSum(nums);
    return 0;
}

// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array
#include<iostream>
#include<vector>
using namespace std;

int arithmeticTriplets(vector<int>& nums, int diff){
    int count=0;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j]-nums[i]==diff){
                for(int k=j; k<nums.size(); k++){
                    if(nums[k]-nums[j]==diff){
                        count++;
                        break;
                    }
                }
            }
        }
    }
    return count;
}

int main(){
    vector<int> nums = {4,5,6,7,8,9};
    cout<<arithmeticTriplets(nums,1);
    return 0;
}

// https://leetcode.com/problems/number-of-arithmetic-triplets/

// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
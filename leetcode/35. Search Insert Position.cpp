#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target){
    int first = 0, last = nums.size()-1;
    while(first<=last){
        int mid = (first+last)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            first=mid+1;
        }
        else{
            last=mid-1;
        }
    }
    return first;
}

int main(){
    vector<int> nums = {1,3,5,6};
    cout<<searchInsert(nums,7);
    return 0;
}

// https://leetcode.com/problems/search-insert-position/
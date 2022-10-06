#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maximum=0, count=0;
    for(auto item : nums){
        if(item==1) count++;
        if(count>maximum) maximum=count;
        if(item==0) count=0;
    }
    return maximum;
}

int main(){
    vector<int> nums = {1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums);
    cout<<endl;
    return 0;
}

// https://leetcode.com/problems/max-consecutive-ones/
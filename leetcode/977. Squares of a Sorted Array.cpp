#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums){
    for(auto &item : nums) item*=item;
    sort(nums.begin(),nums.end());
    return nums;
}

int main(){
    vector<int> nums = {-4,-1,0,3,10};
    for(auto item : sortedSquares(nums)) cout<<item<<"\t";
    cout<<endl;
    return 0;
}

// https://leetcode.com/problems/squares-of-a-sorted-array/
#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums){
    vector<int> ans;
    sort(nums.begin(),nums.end());
    for(int i = 1; i <= size(nums); i++){ 
        bool find = binary_search(nums.begin(),nums.end(),i);
        if(!find) ans.push_back(i);
    }
    return ans;
}

int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    for(auto i : findDisappearedNumbers(nums)) cout<<i<<"\t";
    return 0;
}

// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
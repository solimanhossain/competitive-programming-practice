#include<bits/stdc++.h>
using namespace std;

void duplicateZeros(vector<int>& arr){
    vector<int> vec;
    for(int i=0; i<arr.size(); i++){
        vec.push_back(arr[i]);
        if(arr[i]==0) vec.push_back(0);
        if(vec.size()==arr.size()) break;
    }
    arr=vec;
}

int main(){
    vector<int> nums = {1,0,2,3,0,4,5,0};
    duplicateZeros(nums);
    for(auto item : nums) cout<<item<<" ";
    return 0;
}

// https://leetcode.com/problems/duplicate-zeros/
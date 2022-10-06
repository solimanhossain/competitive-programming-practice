#include<bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums){
    int even=0;
    for(auto item : nums){
        if(to_string(item).size()%2==0) even++;
    }
    return even;
}

int main(){
    vector<int> nums = {555,901,482,1771};
    cout<<findNumbers(nums);
    cout<<endl;
    return 0;
}

// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
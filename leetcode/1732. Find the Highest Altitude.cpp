#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> arr = {0};
        for(int i=0; i<size(gain); i++) arr.push_back(arr[i]+gain[i]);
        sort(arr.begin(), arr.end(), greater<int>());
        return arr[0];
    }
};

int main(){
    Solution leetcode;
    vector<int> gain = {-5,1,5,0,-7};
    cout<<leetcode.largestAltitude(gain);
    return 0;
}

// https://leetcode.com/problems/find-the-highest-altitude/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int sum1 = 0;
        for(int i=1; i<=n; i++){
            sum1 += i;
            int sum2 = 0;
            for(int j=n; j>=i; j--){
                sum2 += j;
            }
            if(sum1 == sum2) return i;
        }
        return -1;
    }
};

int main(){
    Solution leetcode;
    int n = 4;
    cout<<leetcode.pivotInteger(n);
    return 0;
}

// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
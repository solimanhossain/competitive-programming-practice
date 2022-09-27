#include<bits/stdc++.h>
using namespace std;

int xorOperation(int n, int start){
    int XOR = start;
    for(int i=1; i<n; i++){
        XOR  ^= (start + 2 * i);
    }
    return XOR;
}

int main(){
    int  n = 5, start = 0;
    cout<<xorOperation(n,start);
    return 0;
}

// https://leetcode.com/problems/xor-operation-in-an-array/
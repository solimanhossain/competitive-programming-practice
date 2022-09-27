#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    reverse(s.begin(),s.end());
    for(auto i : s) cout<<i;
}

int main(){
    vector<char> str = {'h','e','l','l','o'};
    reverseString(str);
    return 0;
}

// https://leetcode.com/problems/reverse-string/
#include<bits/stdc++.h>
using namespace std;

string reverse(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    string num;
    cin>>num;
    cout<<num+reverse(num);
    return 0;
}
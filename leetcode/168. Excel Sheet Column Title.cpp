#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber){
string columnTitle;
    while(columnNumber){
        columnTitle+=((columnNumber-1)%26+65);
        columnNumber=(columnNumber-1)/26;
    }
    reverse(columnTitle.begin(),columnTitle.end());
    return columnTitle;
}

int main(){
    int num;
    cin>>num;
    cout<<convertToTitle(num);
    return 0;
}

// https://leetcode.com/problems/excel-sheet-column-title/
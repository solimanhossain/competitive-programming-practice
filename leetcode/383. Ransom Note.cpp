#include<bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine){
    for(auto letter : ransomNote){
        int yes = 0;
        for(int i=0; i<magazine.size(); i++){
            if(magazine[i]==letter) {
                magazine.erase(i, 1);
                yes++;
                break;
                }
        }
        if(yes==0) return false;
    }
    return true;
}

int main(){
    string str1, str2;
    cin>>str1>>str2;
    cout<<canConstruct(str1,str2);
    cout<<endl;
    return 0;
}

// https://leetcode.com/problems/ransom-note/
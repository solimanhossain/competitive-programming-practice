#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s1, vector<int>& indices){
        string s2 = s1;
        for(int i=0; i<size(indices); i++){
            s2[indices[i]] = s1[i];
        }
        return s2;
    }
};

int main(){
    Solution soliman;
    string s = "codeleet";
    vector<int> indices = {4,5,6,7,0,2,1,3};
    cout<<soliman.restoreString(s,indices);
    return 0;
}
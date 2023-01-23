#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long double out=0;
        int neg=0, cal=0, pos=0;
        for(auto i : s){
            if(47<i && i<58){
                out=(out*10)+(i-48);
                cal++;
            }
            else{
                if(cal==0){
                    if(i==32){
                        continue;
                    }
                    else if(i==45){
                        cal++;
                        neg=-1;
                        continue;
                    }
                    else if(i==43){
                        cal++;
                        pos++;
                        continue;
                    }
                    return 0;
                }
                break;
            }
        }
        if(neg==-1) out*=-1;
        if(neg*pos!=0) return 0;
        if(out<=INT_MIN) return INT_MIN;
        else if(out>=INT_MAX) return INT_MAX;
        return out;
    }
};


int main(){
    Solution soliman;
    string s = "   +0 123";
    cout<<soliman.myAtoi(s);
    return 0;
}

// https://leetcode.com/problems/string-to-integer-atoi/
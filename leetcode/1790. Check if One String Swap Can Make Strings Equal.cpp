#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool areAlmostEqual(string s1, string s2){
    int count=0;
    vector<char> str1, str2;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]!=s2[i]){
            count++;
        }
        str1.push_back(s1[i]);
        str2.push_back(s2[i]);
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return (count==0 || count==2) && str1==str2;
}

int main(){
    std::string str1,str2;
    std::cin>>str1>>str2;
    std::cout<<areAlmostEqual(str1,str2);
    return 0;
}
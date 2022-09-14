#include<iostream>
#include <algorithm>

std::string Translation(std::string s, std::string t){
    std::reverse(s.begin(), s.end()); 
    if(s==t){
        return "YES";
    }
    return "NO";
}

int main(){
    std::string str1,str2;
    std::cin>>str1>>str2;
    std::cout<<Translation(str1,str2);
    return 0;
}
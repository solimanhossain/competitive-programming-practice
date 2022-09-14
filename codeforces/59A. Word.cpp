#include<iostream>

std::string Word(std::string s,int c){
    if(c>s.length()/2){
        for(int i=0; i<s.length(); i++){
            s[i]=std::toupper(s[i]);
        }
    }
    else{
        for(int i=0; i<s.length(); i++){
            s[i]=std::tolower(s[i]);
        }
    }
    return s;
}

int main(){
    std::string s;
    int count=0;
    std::cin>>s;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            count++;
        }
    }
    std::cout<<Word(s,count);
    return 0;
}
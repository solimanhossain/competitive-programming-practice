#include<iostream>
#include<algorithm>

std::string Boy_or_Girl(std::string name){
    std::sort(name.begin(),name.end());
    int count=0;
    for(int i=0; i<name.length(); i++){
        if(name[i]!=name[i+1]){
            count++;
        }
    }
    if(count%2==0){
        return "CHAT WITH HER!";
    }
    return "IGNORE HIM!";
}

int main(){
    std::string name;
    std::cin>>name;
    std::cout<<Boy_or_Girl(name);
    return 0;
}
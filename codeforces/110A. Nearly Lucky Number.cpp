#include<iostream>

std::string Nearly_Lucky_Number(long long n){
    int c=0;
    while(n!=0){
        if(n%10==4 || n%10==7){
            c++;
        }
        n/=10;
    }
    if(c==4 || c==7){
        return "YES";
    }
    return "NO";
}

int main(){
    long long num;
    std::cin>>num;
    std::cout<<Nearly_Lucky_Number(num);
    return 0;
}
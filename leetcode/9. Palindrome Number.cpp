#include<iostream>

bool Palindrome_Number(int x){
    std::string n=std::to_string(x);
    for(int i=0; i<n.size()/2; i++){
            if(n[i]!=n[n.size()-i-1]){
                return false;
            }
        }
    return true;
}

int main(){
    int x;
    std::cin>>x;
    std::cout<<Palindrome_Number(x);
    return 0;
}
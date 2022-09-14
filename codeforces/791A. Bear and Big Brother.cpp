#include<iostream>

int Bear_and_Big_Brother(int bear,int bob){
    int count=0;
    while(bear<=bob){
        bear*=3;
        bob*=2;
        count++;
    }
    return count;
}

int main(){
    int bear,bob;
    std::cin>>bear>>bob;
    std::cout<<Bear_and_Big_Brother(bear,bob);
    return 0;
}
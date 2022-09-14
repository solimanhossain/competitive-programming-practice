#include<iostream>

int Wrong_Subtraction(int n, int k){
    for(int i=0; i<k; i++){
        if(n%10==0){
            n/=10;
        }
        else{
            n--;
        }
    }
    return n;
}

int main(){
    int number,ktimes;
    std::cin>>number>>ktimes;
    std::cout<<Wrong_Subtraction(number,ktimes);
    return 0;
}
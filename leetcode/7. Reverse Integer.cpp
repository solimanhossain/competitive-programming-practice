#include<iostream>

int reverse(int x) {
    long long num=0;
    while(x){
        num=(10*num)+(x%10);
        x/=10;
    }
    return (num > INT_MAX || num < INT_MIN) ? 0 : num;
}

int main(){
    int num=01234560;
    std::cout<<reverse(num);
    return 0;
}
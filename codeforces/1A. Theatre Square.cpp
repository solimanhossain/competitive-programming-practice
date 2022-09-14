#include<iostream>

long long Theatre_Square(long long n, long long m, long long a){
    if(n%a==0){
        n=n/a;
    }
    else{
        n=n/a+1;
    }
    if(m%a==0){
        m=m/a;
    }
    else{
        m=m/a+1;
    }
    return m*n;
}

int main(){
    long long n, m, a;
    std::cin>>n>>m>>a;
    std::cout<<Theatre_Square(n,m,a);
    return 0;
}
#include<stdio.h>
    
long long Calculating_Function(long long n){
    if(n%2==0) return n/2;
    return (-(n+1)/2);
}
    
int main(){
    long long num;
    scanf("%lld",&num);
    printf("%lld",Calculating_Function(num));
    return 0;
}
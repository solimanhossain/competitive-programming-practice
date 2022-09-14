#include<iostream>

int Soldier_and_Bananas(int k, int n, int w){
    int total = 0;
    for(int i=1; i<=w; i++){
        total+=(i*k);
    }
    if(total-n<1){
        return 0;
    }
    return total-n;
}

int main(){
    int price,balance,banana;
    std::cin>>price>>balance>>banana;
    std::cout<<Soldier_and_Bananas(price,balance,banana);
    return 0;
}
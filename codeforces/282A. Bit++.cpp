#include<iostream>

int main(){
    int n,count=0;
    std::cin>>n;
    char x[n][3];
    for(int i=0; i<n; i++){
        std::cin>>x[i][0];
        std::cin>>x[i][1];
        std::cin>>x[i][2];
        if(x[i][1]=='-'){
            count--;
        }
        else if(x[i][1]=='+'){
            count++;
        }
    }
    std::cout<<count;
    return 0;
}
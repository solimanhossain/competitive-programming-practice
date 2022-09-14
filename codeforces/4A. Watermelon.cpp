#include<iostream>
#include<string>

std::string Watermelon(int w){
    return (w <= 2 || w % 2) ? "NO" : "YES";
}

int main(){
    int weight;
    std::cin>>weight;
    std::cout<<Watermelon(weight);
    return 0;
}
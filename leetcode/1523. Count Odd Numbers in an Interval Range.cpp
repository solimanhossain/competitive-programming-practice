#include<iostream>

int countOdds(int low, int high) {
    int count=0;
    while(low<=high){
        if(low%2!=0){
            count++;
        }
        low++;
    }
    return count++;
}

int main(){
    int num1,num2;
    std::cin>>num1>>num2;
    std::cout<<countOdds(num1,num2);
    return 0;
}

// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/
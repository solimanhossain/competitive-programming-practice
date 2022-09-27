#include<iostream>
#include<vector>

std::vector<std::string> fizzBuzz(int n){
    std::vector<std::string> ans;
    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5==0){
            ans.push_back("FizzBuzz");
        }
        else if(i%5==0){
            ans.push_back("Buzz");
        }
        else if(i%3==0){
            ans.push_back("Fizz");
        }
        else{
            ans.push_back(std::to_string(i));
        }
    }
    return ans;
}        

int main(){
    int num=15;
    std::vector<std::string> ansr = fizzBuzz(num);
    for (auto i : ansr) {
        std::cout<<i<<"\t";
    }
    std::cout<<std::endl;
    return 0;
}

// https://leetcode.com/problems/fizz-buzz/
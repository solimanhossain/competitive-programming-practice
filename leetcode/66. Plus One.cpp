#include<iostream>
#include<vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    for(int i=digits.size()-1; i>=0; i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
        else{
            digits[i]=0;
        }
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main(){
    std::vector<int> digits = {9,2};
    std::vector<int> v = plusOne(digits);
    
    for(int i=0; i<v.size(); i++){
        std::cout<<v[i]<<"\t";
    }
    return 0;
}
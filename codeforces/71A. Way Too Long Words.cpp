#include<iostream>
#include<string>

void Way_Too_Long_Words(std::string in_word){
    int size = in_word.length();
    if(size<=10){
        std::cout<<in_word<<std::endl;
    }
    else{
        std::cout<<in_word[0]<<size-2<<in_word[size-1]<<std::endl;
    }
}

int main(){
    int n;
    std::cin>>n;
    std::string in_word[n];
    for(int i=0; i<n; i++){
        std::cin>>in_word[i];
    }
    for(int i=0; i<n; i++){
        Way_Too_Long_Words(in_word[i]);
    }
    return 0;
}
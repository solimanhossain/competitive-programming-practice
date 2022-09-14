#include<iostream>

int Team(int n){
    int score[1000][3], count=0;
    for(int i=0; i<n; i++){
        std::cin>>score[i][0];
        std::cin>>score[i][1];
        std::cin>>score[i][2];
        if(score[i][0]+score[i][1]+score[i][2] > 1){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<Team(n);
    return 0;
}
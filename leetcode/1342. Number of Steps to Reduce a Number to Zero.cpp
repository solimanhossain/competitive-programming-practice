#include<bits/stdc++.h>
using namespace std;

// int numberOfSteps(int num){
//     int cal=0;
//     while(num){
//         if(num%2==0){
//             num/=2;
//         }
//         else{
//             num-=1;
//         }
//         cal++;
//     }
//     return cal;
// }

int numberOfSteps(int num) {
    int step=0;
    while(num){
        if((num&1)==0) num>>=1;
        else num--;
        step++;
    }
    return step;
}

int main(){
    uint16_t num=10;
    cout<<numberOfSteps(num);
    return 0;
}

// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
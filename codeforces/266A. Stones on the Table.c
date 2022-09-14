#include<stdio.h>

int Stones_on_the_Table(int n, char s[]){
    int cal=0;
    for(int i=0; i<n; i++){
        if(s[i]==s[i+1]){
            cal++;
        }
    }
    return cal;
}

int main(){
    int num;
    scanf("%d",&num);
    char stone[num];
    scanf("%s",&stone);
    printf("%d",Stones_on_the_Table(num,stone));
    return 0;
}

// https://codeforces.com/problemset/problem/266/A
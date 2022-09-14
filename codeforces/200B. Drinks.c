#include<stdio.h>

float Drinks(int j[],int b){
    float sum=0;
    for(int i=0; i<b; i++){
        sum+=j[i];
        // printf("%f\t",sum);
    }
    return sum/b;
}

int main(){
    int bottle;
    scanf("%d",&bottle);
    int juice[bottle];
    for(int i=0; i<bottle; i++){
        scanf("%d",&juice[i]);
    }
    printf("%f",Drinks(juice,bottle));
    return 0;
}
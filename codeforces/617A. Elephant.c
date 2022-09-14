#include <stdio.h>

int Elephant(int x){
    int count=0;
    while(x>0){
        if(x-5>=0){
            x-=5;
            count++;
        }
        else if(x-4>=0){
            x-=4;
            count++;
        }
        else if(x-3>=0){
            x-=3;
            count++;
        }
        else if(x-2>=0){
            x-=2;
            count++;
        }
        else if(x-1>=0){
            x-=1;
            count++;
        }
    }
    return count;
}

int main(){
    int distance;
    scanf("%d",&distance);
    printf("%d",Elephant(distance));
    return 0;
}
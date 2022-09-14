#include<iostream>

int Next_Round(int n, int k, int a[]){
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]>=a[k-1] && a[i]>0){
            count++;
        }
    }
    return count;
}

int main(){
    int n,k,a[99];
    std::cin>>n>>k;
    for(int i=0; i<n; i++){
        std::cin>>a[i];
    }
    std::cout<<Next_Round(n,k,a);
    return 0;
}
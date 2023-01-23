#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countPrimes(int n){
        if(n<3) return 0;
        vector<int> prime(n,true);
        for(long long i=2; i<n; i++){
            if(!prime[i]) continue;
            for(long long j=i*i; j<n; j+=i) prime[j]=false;
        }
        return count(prime.begin(), prime.end(), true)-2;
    }
};

// class Solution{
// public:
//     int countPrimes(int n){
//         int prime = 0;
//         vector<int> nonprime(n,false);
//         for(int i=2; i<n; i++){
//             if(nonprime[i]==true) continue;
//             for(int j=i*i; j<n; j+=i) nonprime[j]=true;
//             prime++;
//         }
//         return prime;
//     }
// };

int main(){
    Solution soliman;
    int n=2;
    cout<<soliman.countPrimes(n);
    return 0;
}

// https://leetcode.com/problems/count-primes/
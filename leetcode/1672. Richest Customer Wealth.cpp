#include<bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int wealth = 0;
    for (auto items : accounts){
        int amount = 0;
        for(auto elements : items){
            amount += elements;
        }
        if(wealth<amount) wealth = amount;
    }
    return wealth;
}

int main(){
	vector<vector<int>> accounts
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout<<maximumWealth(accounts);
  
    return 0;
}

// https://leetcode.com/problems/richest-customer-wealth/
#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
    vector<int> temp = candies;
    vector<bool> count;
    sort(candies.begin(), candies.end());
    for(int i=0; i<temp.size(); i++){
        if(temp[i]+extraCandies >= candies[temp.size()-1]){
            count.push_back(true);
        }
        else{
            count.push_back(false);
        }
    }
    return count;
}

int main(){ 
    vector<int> nums = {12,1,12};
    vector<bool> x = kidsWithCandies(nums,10);
    for(auto i:x) cout<<i<<"\t";
    cout<<endl;
    return 0;
}
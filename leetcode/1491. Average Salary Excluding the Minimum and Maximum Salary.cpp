#include<iostream>
#include<algorithm>
#include<vector>

double average(std::vector<int>& salary) {
    std::sort(salary.begin(), salary.end());
    double sum=0;
    int size = salary.size()-2;
    for(int i=1; i<=size; i++){
        sum+=salary[i];
        std::cout<<sum<<"\t"<<salary[i]<<"\n";
    }
    return sum/size;
}

int main(){
    std::vector<int> salary = {48000,59000,99000,13000,78000,45000,31000,17000,39000,37000,93000,77000,33000,28000,4000,54000,67000,6000,1000,11000};
    std::cout<<average(salary);
    return 0;
}

// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
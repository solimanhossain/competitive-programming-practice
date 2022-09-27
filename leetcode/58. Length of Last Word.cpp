#include <iostream>
#include <string>

int lengthOfLastWord(string s) {
    int size=s.length()-1,count=-1;
    if(size==0 && s[0]!=' '){
        return 1;
    }
    for(int i=size;i>=0;i--){
        if(s[size]==' '){
            size=size-1;
            continue;
        }
        if(s[i]==' '){
            count=i;
            break;
        }
    }
    return size-count;
}

int main(){
	std::string str;
	getline(std::cin, str);
    std::cout<<lengthOfLastWord(str);
	return 0;
}

// https://leetcode.com/problems/length-of-last-word/
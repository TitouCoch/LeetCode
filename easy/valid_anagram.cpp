//LeetCode : Challenge Valid Anagram

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if(t == s){
            return true;
        }
        return false;
    }
};

std::string s = "a";
std::string t = "bb";
Solution sol;

int main() {
        if(sol.isAnagram(s, t) == 1){
        std::cout << "TRUE" <<std::endl;
    }
    else{
        std::cout << "FALSE" <<std::endl;
    }
    return 0;
}



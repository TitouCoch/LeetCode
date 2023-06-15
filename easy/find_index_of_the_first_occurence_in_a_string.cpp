//LeetCode : Challenge Find Index Of The First Occurence In A String

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>


class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int result;
        int indice;
        for(int i = 0; i < haystack.length(); i++){
            result = i;
            for(int j = 0; j < needle.length(); j++){
                indice = i + j;
                if(indice < haystack.size() && needle[j] == haystack[indice]){
                    if(j == needle.size() - 1){
                       return result;
                    }
                    continue;
                }
                break;
            }
        }
        return -1;
    }
};

std::string  haystack = "sadbutsad";
std::string  needle = "sad";
Solution sol;

int main() {
    std::cout << "Index : " <<sol.strStr(haystack, needle) << std::endl;
    return 0;
}

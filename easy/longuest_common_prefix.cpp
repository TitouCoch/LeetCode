//LeetCode : Challenge Longuest Common Prefix

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string result = "";
        int minLength = strs[0].length();
        for (int i = 0; i < minLength; i++) {
            char currentChar = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != currentChar) {
                    return result;
                }
            }
            result += currentChar;
        }
        return result;
    }
};


std::vector<std::string> strs = {"flower", "flow", "flight"};
Solution sol;

int main() {
    std::cout << "Longuest Prefix : " << sol.longestCommonPrefix(strs) << std::endl;
    return 0;
}



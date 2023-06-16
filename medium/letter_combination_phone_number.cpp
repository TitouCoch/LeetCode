//LeetCode : Challenge Letter Combinations of a Phone Number

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>
#include <map>

class Solution {
public:


    std::map<int, std::vector<char>> alphabet;
    alphabet = {
        alphabet[2] = {'a','b','c'};
        alphabet[3] = {'d','e','f'};
        alphabet[4] = {'g','h','i'};
        alphabet[5] = {'j','k','l'};
        alphabet[6] = {'m','n','o'};
        alphabet[7] = {'p','q','r', 's'};
        alphabet[8] = {'t','u','v'};
        alphabet[9] = {'w','x','y', 'z'};
    }
    vector<string> letterCombinations(string digits) {
        for(int i = 0; i < digits.size(); i++)
    }
};

Solution sol;
std::string digits = "23"

int main() {
    std::vector<string> aVector;
    aVector = sol.threeSum(nums);
    for(int a = 0; a < aVector.size(); a++){
        std::cout << aVector[a] << std::endl;
    }
    return 0;
}

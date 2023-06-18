//LeetCode : Challenge Pascals Triangle

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int> > generate(int numRows) {
        std::vector<std::vector<int>> result(numRows, std::vector<int>());
        result[0].push_back(1);
        for (int i = 1; i < numRows; i++) {
            if (!result[i - 1].empty()) {
                for (int j = 1; j < i; j++) {
                    result[i].push_back(result[i - 1][j - 1] + result[i - 1][j]);
                }
            }
            result[i].insert(result[i].begin(), 1);
            result[i].push_back(1);
        }
        return result;
    }
};




int main() {
    int numRows = 5;
    Solution sol;
    std::vector<std::vector<int> > result;
    result = sol.generate(numRows);
    for (const std::vector<int>& row : result) {
        for (int value : row) {
            std::cout << value << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}

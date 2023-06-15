//LeetCode : Challenge Two Sum

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result;
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < nums.size(); j++){
                if(j != i && nums[i]+nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        } 
        return result;
    }
};

std::vector<int >nums = {2,7,11,15};
int target = 9;
Solution sol;

int main() {
    sol.twoSum(nums, target);
    return 0;
}



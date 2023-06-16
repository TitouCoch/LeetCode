//LeetCode : Challenge 3sum

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue; 
            }

            int target = -nums[i];
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum < target) {
                    left++;
                } else if (sum > target) {
                    right--;
                } else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--; 
                    }
                }
            }
        }
        return result;
    }
};

std::vector<int> nums = {13,11,-3,-1,6,-11,-11,-12,1,-11,-10,12,3,-11,0,9,3,-13,-10,-2,6,14,9,-4,-9,-3,-9,-15,-10,4,-7,10,1,-3,-5,14,1,-9,-13,-12,-4,-8,7,6,-4,-8,0,6,-14,-3,-11,0,-4,13,3,2,-13,9,2,14,-1,10,10,7,14,12,6,0,-12,0,-5,-9,7,-13,12,10,-13,-3,1,10,9,5,-5,12,-5,13,-1,-11,0,-14,-11,6,3,14,-2,2,11,11,10,6,-4,12,13,10,7,10,5,1};
Solution sol;

int main() {
    std::vector<std::vector<int>> aVector;
    aVector = sol.threeSum(nums);
    for(int a = 0; a < aVector.size(); a++){
        std::cout << "--" << std::endl;
        for(int b = 0; b < aVector[a].size(); b++){
            std::cout << aVector[a][b] << std::endl;
        }
    }
    return 0;
}

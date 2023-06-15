//LeetCode : Challenge Search Insert Position

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int indice;
        for(int i = 0; i < nums.size(); i++){
            std::cout << "i: " << i << std::endl;
            std::cout << "nums[i]: " << nums[i] << std::endl;
            if(nums[i] == target){
                std::cout << "1er conditions, target: " << target << std::endl;
                return i;
            }
            if(nums[i] > target){
                std::cout << "Zeme conditions, target: " << target << std::endl;
                indice = i;
                break;
            }
            if(target > nums[i] && i == (nums.size()-1)){
                std::cout << "3eme conditions, target: " << target << std::endl;
                indice = i+1;
                break;
            }
        }
        return indice;
    }
};

std::vector<int> nums = {1,3,5,6};
int target = 7;
Solution sol;

int main() {
    sol.searchInsert(nums, target);
    return 0;
}

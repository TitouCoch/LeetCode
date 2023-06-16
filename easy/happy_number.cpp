//LeetCode : Challenge Happy Number

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>


class Solution {
public:
    bool isHappy(int n) {
        std::vector<int> aListe = {};
        std::vector<int> digits;
        int digit;
        int result = 0;

        while(result != 1){
            digits = {};
            while (n > 0) {
                digit = n % 10; 
                digits.push_back(digit);
                n /= 10; 
            }

            result = 0;
            for(int i=0; i < digits.size(); i++){
                result += digits[i] * digits[i];
            }

            for(int j = 0; j < aListe.size(); j++){
                if(result == aListe[j]){
                    return false;
                }
            }
            aListe.push_back(result);
            n = result;
        }
        return true;
    }
};

Solution sol;

int main() {
    std::cout << sol.isHappy(19) << std::endl;
    std::cout << sol.isHappy(2) << std::endl;
    return 0;
}

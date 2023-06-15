//LeetCode : Challenge Roman To Integer

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>

class Solution {
public:
    int romanToInt(std::string s) {
        int result = 0;
        for (std::size_t i = 0; i < s.length(); i++) {
            char c = s[i];
            switch (c) {
                case 'I':
                    if(s[i+1]=='V'){
                        result-=1;
                        continue;
                    }
                    if(s[i+1]=='X'){
                        result-=1;
                        continue;
                    }
                    result+=1;
                    break;
                case 'V':
                    result+=5;
                    break;
                case 'X':
                    if(s[i+1]=='L'){
                        result-=10;
                        continue;
                    }
                    if(s[i+1]=='C'){
                        result-=10;
                        continue;
                    }
                    result+=10;
                    break;
                case 'L':
                    result+=50;
                    break;
                case 'C':
                    if(s[i+1]=='M'){
                        result-=100;
                        continue;
                    }
                    if(s[i+1]=='D'){
                        result-=100;
                        continue;
                    }
                    result+=100;
                    break;
                case 'D':
                    result+=500;
                    break;
                case 'M':
                    result+=1000;
                    break;
                default:
                    std::cout << "Default" << std::endl;
            }
        }
            return result;
    }
};

std::string s = "IV";
Solution sol;

int main() {
    std::cout << sol.romanToInt(s) << std::endl;
    return 0;
}



//LeetCode : Challenge Valid Parentheses

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>

class Solution {
public:
    bool isValid(std::string s) {
        std::vector<char> aListe;
        char lastElement;
        for(int i=0; i< s.length(); i++){
            switch (s[i]) {
                case ')':
                    if(aListe.empty()){        
                        return false;
                    }  
                    lastElement = aListe.back();
                    if(lastElement != '('){
                        return false;
                    }
                    aListe.pop_back();
                    break;
                case '}':
                    if(aListe.empty()){        
                        return false;
                    }
                    lastElement = aListe.back();
                    if(lastElement != '{'){
                        return false;
                    }
                    aListe.pop_back();
                    break;
                case ']':
                    if(aListe.empty()){        
                        return false;
                    }   
                    lastElement = aListe.back();
                    if(lastElement != '['){
                        return false;
                    }
                    aListe.pop_back();
                    break;
                default: 
                    aListe.push_back(s[i]);
                    break;
            }
        }
        if(!aListe.empty()){
            return false;
        }
        return true;
    }
};

std::string s = "()";
Solution sol;

int main() {
    if(sol.isValid(s) == 1){
        std::cout << "TRUE" <<std::endl;
    }
    else{
        std::cout << "FALSE" <<std::endl;
    }
    return 0;
}


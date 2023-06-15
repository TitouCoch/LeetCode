//LeetCode : Challenge Valid Sudoku

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>

class Solution {
public:
    int findBox(int x, int y) {
        int box;
        int boxX = (x >= 0 && x <= 2) ? 1 : (x >= 3 && x <= 5) ? 2 : (x >= 6 && x <= 8) ? 3 : 0;
        int boxY = (y >= 0 && y <= 2) ? 1 : (y >= 3 && y <= 5) ? 2 : (y >= 6 && y <= 8) ? 3 : 0;

        switch (boxX) {
            case 1:
                switch (boxY) {
                    case 1:
                        box = 0;
                        break;
                    case 2:
                        box = 1;
                        break;
                    case 3:
                        box = 2;
                        break;
                }
                break;
            case 2:
                switch (boxY) {
                    case 1:
                        box = 3;
                        break;
                    case 2:
                        box = 4;
                        break;
                    case 3:
                        box = 5;
                        break;
                }
                break;
            case 3:
                switch (boxY) {
                    case 1:
                        box = 6;
                        break;
                    case 2:
                        box = 7;
                        break;
                    case 3:
                        box = 8;
                        break;
                }
                break;
        }
        return box;
    }

    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        std::vector<std::vector<char>> columnList(9, std::vector<char>());
        std::vector<std::vector<char>> boxList(9, std::vector<char>());
        int boxNumber;

        for (int i = 0; i < board.size(); i++) {
            std::vector<char> lineList;
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] != '.') {
                    for (const auto& elementLine : lineList) {
                        if (elementLine == board[i][j]) {
                            return false;
                        }
                    }
                    for (const auto& elementColumn : columnList[j]) {
                        if (elementColumn == board[i][j]) {
                            return false;
                        }
                    }
                    boxNumber = findBox(i, j);
                    for (const auto& elementBoxColumn : boxList[boxNumber]) {
                        if (elementBoxColumn == board[i][j]) {
                            return false;
                        }
                    }
                    lineList.push_back(board[i][j]);
                    columnList[j].push_back(board[i][j]);
                    boxList[boxNumber].push_back(board[i][j]);
                }
            }
        }
        return true;
    }
};


Solution sol;
std::vector<std::vector<char>> board = {
        {'5','0','.','.','7','.','.','.','.'},
        {'1','.','.','2','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

int main() {
    if(sol.isValidSudoku(board) == 1){
        std::cout << "TRUE" <<std::endl;
    }
    else{
        std::cout << "FALSE" <<std::endl;
    }
    return 0;
}

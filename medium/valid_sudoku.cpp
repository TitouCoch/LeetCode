//LeetCode : Challenge Valid Sudoku

//command : g++ -std=c++11 file.cpp  -o file then ./file

#include <iostream>
#include <vector>

class Solution {
public:
int findbox(int x, int y) {
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
        std::vector<char> lineList;
        std::vector<std::vector<char>> ColumnList;
        std::vector<std::vector<char>> BoxList;
        int boxNumero;

        for(int a = 0; a < 9; a++){
            ColumnList.push_back({});
            BoxList.push_back({});
        }

        for(int i = 0; i < board.size(); i++){
            lineList = {};


            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] != '.'){
                    for (const auto& elementLine : lineList) {
                        if (elementLine == board[i][j]) {
                            std::cout << "Premiere" <<std::endl;
                            return false;
                        }
                    }
                    for (const auto& elementColumn : ColumnList[i]) {
                        if (elementColumn == board[i][j]) {
                            std::cout << "Deuxieme" <<std::endl;
                            return false;
                        }
                    }
                    boxNumero = findbox(i,j);
                    for (const auto& elementBoxColumn : BoxList[boxNumero]) {
                        if (elementBoxColumn == board[i][j]) {
                            std::cout << "Troisieme" <<std::endl;
                            return false;
                        }
                    }
                    lineList.push_back(board[i][j]);
                    ColumnList[i].push_back(board[i][j]);
                    BoxList[boxNumero].push_back(board[i][j]);
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
    std::cout << sol.isValidSudoku(board) <<std::endl;
    return 0;
}

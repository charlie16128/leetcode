#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        dosolve(board, 0, 0);
    }

private: 
    bool dosolve(vector<vector<char>>& board, int row, int col){
        for(int i = row; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.') continue;

                for(char num = '1'; num <= '9'; num++){
                    if(isvaild(board, i, j, num)){
                        board[i][j] = num;
                        if(dosolve(board, i, j + 1)) 
                            return true;
                        board[i][j] = '.';
                    }
                }
                return false;
            }
        }
        return true;
    }
    
    bool isvaild(vector<vector<char>>& board, int row, int col, char num){
        int boxrow = (row / 3) * 3, boxcol = (col / 3) * 3;
        for(int i = 0; i < 9; i++)
            if(board[i][col] == num || board[row][i] == num || board[boxrow + i / 3][boxcol + i % 3] == num)
                return false;
        return true;

    }
};

int main(){}
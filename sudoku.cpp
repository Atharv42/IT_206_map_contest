#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is valid in the Sudoku grid

class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            vector<unordered_map<char, int>> hash_r(9), hash_c(9), hash_box(9);
    
            for (int i=0; i<9; i++) {
                for (int j=0; j<9; j++) {
                    char ch = board[i][j];
                    if (ch=='.') continue;

                    hash_r[i][ch]++;
                    if (hash_r[i][ch]>1) return false;
                    
                    hash_c[j][ch]++;
                    if (hash_c[j][ch]>1) return false;
                    
                    int box_index=(i/3)*3 + (j/3);
                    hash_box[box_index][ch]++;
                    if (hash_box[box_index][ch]>1) return false;
                }
            }
            return true;
        }
    };
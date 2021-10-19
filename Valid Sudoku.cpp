//Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
//Each row must contain the digits 1-9 without repetition.
//Each column must contain the digits 1-9 without repetition.
//Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
//Note:
//A Sudoku board (partially filled) could be valid but is not necessarily solvable.
//Only the filled cells need to be validated according to the mentioned rules.
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     int row[9] = {0};
     int col[9] = {0};
     int mat[3][3] = {0};
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[0].size() ; j++){
                if(board[i][j] != '.'){
                    int mask = 1 << (board[i][j] - '0') ;
              if((row[i] & mask) == 0 && (col[j] & mask) == 0 && (mat[i/3][j/3]&mask) == 0){  
					row[i] ^= mask ;
					col[j] ^= mask ;
					mat[i/3][j/3] ^= mask ;
                   }
                    else return false ;
                }
            }
        }
        return true ;
    }
};
 

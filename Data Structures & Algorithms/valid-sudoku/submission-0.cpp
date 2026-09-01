class Solution {
public:
    bool helper(int row,int col,vector<vector<char>>& board){
        char ch=board[row][col];
        //check row
        for(int i=0; i<9; i++){
            if(i!=col && board[row][i]==ch){
                return false;
            }
        }
        //check col
        for(int i=0; i<9; i++){
            if(i!=row && board[i][col]==ch){
                return false;
            }
        }
        //check minor box
        int nrow=(row/3)*3; 
        int ncol=(col/3)*3;
        for(int i=nrow; i<nrow+3; i++){
            for(int j=ncol; j<ncol+3; j++){
                if ((i!=row || j!=col) && board[i][j]==ch){
                    return false;
                }
            }
        }
        return true;

    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]!='.'){  
                    if(!helper(i,j,board)){
                        return false;
                    }    
                }
                
            }
        }
        return true;
    }
};

class Solution {
public:
    bool safe(int row,int col,vector<string> &board,int n){
        int r=row;
        int c=col;
        while(c>=0){
            if(board[r][c]=='Q')return false;
            c--;
        }
        c=col;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q')return false;
            r--;c--;
        }
        r=row;
        c=col;
        while(r<n && c>=0){
            if(board[r][c]=='Q')return false;
            r++;c--;
        }
        return true;
    }
    void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(safe(row,col,board,n)==true){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }
            
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> board(n);
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};
class Solution {
public:
    void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n,vector<int> &ver,vector<int> &upDiag,vector<int> &downDiag){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(ver[row]==0 && upDiag[row+col]==0 && downDiag[n-1+col-row]==0){
                board[row][col]='Q';
                ver[row]=1;
                upDiag[row+col]=1;
                downDiag[n-1+col-row]=1;
                solve(col+1,board,ans,n,ver,upDiag,downDiag);
                board[row][col]='.';
                ver[row]=0;
                upDiag[row+col]=0;
                downDiag[n-1+col-row]=0;
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
        vector<int> row(n,0);
        vector<int> upDiag(2*n-1,0);
        vector<int> downDiag(2*n-1,0);
        solve(0,board,ans,n,row,upDiag,downDiag);
        return ans;
    }
};
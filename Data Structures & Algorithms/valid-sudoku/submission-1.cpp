class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=9,i,k,j,l;
        for (i=0;i<n;i++){
            unordered_set<char> s;
            for(j=0;j<n;j++){
                if(board[i][j]=='.') continue;
                if(s.find(board[i][j])!=s.end()){
                    cout<<"1: "<<i<<' '<<j;
                    return false;
                }
                s.insert(board[i][j]);
            }
        }

        for (i=0;i<n;i++){
            unordered_set<char> s;
            for(j=0;j<n;j++){
                if(board[j][i]=='.') continue;
                if(s.find(board[j][i])!=s.end()){
                    cout<<"2: "<<j<<' '<<i;
                    return false;
                }
                s.insert(board[j][i]);
            }
        }

        for(i=0;i<9;i+=3){
            for(j=0;j<9;j+=3){
                unordered_set<char> s;
                for(k=i;k<i+3;k++){
                    for(l=j;l<j+3;l++){
                        if(board[l][k]=='.') continue;
                        if(s.find(board[l][k])!=s.end()){
                            cout<<"3: "<<l<<' '<<k;
                            return false;
                        }
                        s.insert(board[l][k]);
                    }
                }
            }
        }

        return true;
    }
};

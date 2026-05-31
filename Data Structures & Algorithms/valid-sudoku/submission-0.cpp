class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=9,i,k,j,l;
        for (i=0;i<n;i++){
            unordered_map<char,int> mp;
            for(j=0;j<n;j++){
                if(board[i][j]=='.') continue;
                if(mp.find(board[i][j])!=mp.end()){
                    cout<<"1: "<<i<<' '<<j;
                    return false;
                }
                mp[board[i][j]]++;
            }
        }

        for (i=0;i<n;i++){
            unordered_map<char,int> mp;
            for(j=0;j<n;j++){
                if(board[j][i]=='.') continue;
                if(mp.find(board[j][i])!=mp.end()){
                    cout<<"2: "<<j<<' '<<i;
                    return false;
                }
                mp[board[j][i]]++;
            }
        }

        for(i=0;i<9;i+=3){
            for(j=0;j<9;j+=3){
                unordered_map<char,int> mp;
                for(k=i;k<i+3;k++){
                    for(l=j;l<j+3;l++){
                        if(board[l][k]=='.') continue;
                        if(mp.find(board[l][k])!=mp.end()){
                            cout<<"3: "<<l<<' '<<k;
                            return false;
                        }
                        mp[board[l][k]]++;
                    }
                }
            }
        }

        return true;
    }
};

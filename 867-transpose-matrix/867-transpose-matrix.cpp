class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        vector<vector<int>> trans(n,vector<int> (m,0));
        //cout<<m<<" "<<n;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
               { 
                
                   trans[j][i]=matrix[i][j];
               
               }        
        }
        return trans;
    }
};
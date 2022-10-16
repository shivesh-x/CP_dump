





      















class Solution {

public:

    //Just keep it very simple 

    //if any row or col containing zeros that means we have to set that row or col to zero.

    void setZeroes(vector<vector<int>>& matrix){

        bool isrow = false, iscol = false;

        for(int i=0;i<matrix.size();i++){

            for(int j=0;j<matrix[0].size();j++){

                if(matrix[i][j] == 0){

                    if(i == 0) isrow = true;

                    if(j == 0) iscol = true;

                    //for further memorization we set the first element of that col and row to zero.

                    matrix[i][0] = matrix[0][j] = 0;

                }

            }

        }

        for(int i=1;i<matrix.size();i++){

            for(int j=1;j<matrix[0].size();j++){

                if(matrix[i][0] == 0 or matrix[0][j] == 0){

                    matrix[i][j] = 0;

                }

            }

        }

        if(iscol) for(int i=0;i<matrix.size();i++) matrix[i][0] = 0;

        if(isrow) for(int j=0;j<matrix[0].size();j++) matrix[0][j] = 0;

    }

};

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size()-1;
        int n=matrix[0].size()-1;
        if(m<1 && n<1) return true;
        for(int i=m;i>0;i--)
        {
            for(int j=n;j>0;j--)
            {
                if(matrix[i][j]!=matrix[i-1][j-1])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
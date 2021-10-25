class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int N=matrix.size();
        int M=matrix[0].size();
        int i=0;
        int j=M-1;
        while(i<N and j>=0){
            if(target == matrix[i][j]) return 1;
            if(matrix[i][j]>target) j--;
            else i++;
        }
        return 0;
    }
};
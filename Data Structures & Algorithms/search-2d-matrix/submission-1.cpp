class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = -1,col =-1, rn = matrix.size(), cn = matrix[0].size();
        int l = 0, r = rn*cn-1;
        while(l<=r){
            int mid = l + (r - l)/2;
            if( matrix[mid/cn][mid%cn] > target ) r = mid -1;
            else if( matrix[mid/cn][mid%cn] < target ) l = mid +1;
            else return true;
        }
        return false;
    }
};

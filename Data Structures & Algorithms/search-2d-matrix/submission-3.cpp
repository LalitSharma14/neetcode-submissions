class Solution {
public:
    bool helper(int row,vector<vector<int>>& matrix, int target){
        int low=0;
        int high=matrix[row].size()-1;
        while(low<=high){
            int mid=high-(high-low)/2;
            if(matrix[row][mid]==target){
                return true;
            }
            else if(matrix[row][mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high=matrix.size()-1;
        int row=1e9;
        while(low<=high){
            int mid=high-(high-low)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][matrix[0].size()-1]){
                row=mid;
            }
            if(matrix[mid][0]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(row==1e9) return false;
        return helper(row,matrix,target);
        
    }
};

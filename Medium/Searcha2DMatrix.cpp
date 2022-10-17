class Solution {
public:
    bool binarySearch(vector<int>v, int l, int r, int target){
        if(l > r)
            return false;
        int mid = (l+r)/ 2;
        if(v[mid] == target)
            return true;
        else if(v[mid] < target)
            return binarySearch(v, mid + 1, r, target);
        else
            return binarySearch(v, l, mid - 1, target);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int N = matrix.size();
        int index = 0;
        bool flag = false;
        for(int i = 0; i < N; i++){
            if(matrix[i][0] == target){
                flag = true;
                break;
            }            
            else if(matrix[i][0] > target){
                if(N == 1 || i == 0)
                    index = 0;
                else
                    index = i - 1;
                break;
            }
            else if(matrix[i][0] < target && i == N - 1)
                index = i;
            
        }
        if(flag)
            return true;
        else{
            
            int l = 0;
            int r = matrix[index].size() - 1;
            flag = binarySearch(matrix[index], l, r, target);
        }
        return flag;
    }
};

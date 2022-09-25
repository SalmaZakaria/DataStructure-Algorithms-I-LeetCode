class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int N = nums.size();
        vector<int>v(N);
        for(int i = 0; i < N; i++){
            nums[i] = nums[i]*nums[i];
        }
        int index1 = 0, index2 = N - 1;
        int j = N-1;
        for(int i = 0; i < N; i++){
            if(nums[index2] > nums[index1]){
                v[j] = nums[index2]; 
                index2--;
                j--;
            }
            else if(nums[index1] >= nums[index2]){
                v[j] = nums[index1]; 
                index1++;
                j--;
            }
           
        }
        return v;
    }
};

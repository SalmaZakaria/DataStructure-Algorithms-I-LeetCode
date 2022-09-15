class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int Length = nums1.size();
        int L = nums1.size() - 1;
        int itr1 = m - 1;
        int itr2 = n - 1;
        if(m == 0)
            nums1 = nums2;
        else if(n != 0){
            for(int i = 0; i < Length; i++){
                if(itr1 < 0 && itr2 < 0)
                    break;
                else if(itr1 < 0){
                    nums1[L] = nums2[itr2];
                    itr2--;
                    L--;
                    continue;
                }
                else if(itr2 < 0){
                    nums1[L] = nums1[itr1];
                    itr1--;
                    L--;
                    continue;
                }
                if(nums1[itr1] >= nums2[itr2]){
                    nums1[L] = nums1[itr1];
                    itr1--;
                }
                else{
                    nums1[L] = nums2[itr2];
                    itr2--;
                }
                L--;
            }
        }
        
    }
};

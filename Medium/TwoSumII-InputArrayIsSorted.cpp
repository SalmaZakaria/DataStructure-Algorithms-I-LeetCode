class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0, index2 = 0;
        int N = numbers.size();
        int l = 0, r = N - 1;
        vector<int>v;
        while(l < N){
            if(numbers[l] + numbers[r] == target){
                v.push_back(l + 1);
                v.push_back(r + 1);
                break;
            }else if(numbers[l] + numbers[r] > target){
                r--;
            }else{
                l++;
            }
        }
        return v;
    }
};

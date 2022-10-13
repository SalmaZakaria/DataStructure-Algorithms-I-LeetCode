class Solution {
public:
    void reverseString(vector<char>& s) {
        //First Solution
        reverse(s.begin(), s.end());
        
        /*
        Second Solution(Two Pointers Approach)
        int N = s.size();
        int l = 0;
        int r = N - 1;
        while(l < r){
            int temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }
        */
    }
};

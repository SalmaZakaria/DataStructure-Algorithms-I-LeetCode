class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int N = prices.size();
        int index1 = 0;
        int index2 = N - 1;
        int max = 0;
        int min = INT_MAX;
        int current = 0;
        for(int i = 0; i < N; i++){
            
            if(prices[i] < min)
                min = prices[i];

            current = prices[i] - min;
            if(current > max)
                max = current;
        }
        return max;
    }
};

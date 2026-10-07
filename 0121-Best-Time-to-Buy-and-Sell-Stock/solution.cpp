class Solution {
public:
    int maxProfit(vector<int>& A) {
        int mini = A[0];
        int maxprofit = 0;
        int n = A.size();
        for(int i = 1; i<n; i++){
            int cost = A[i] - mini;
            maxprofit = max(maxprofit,cost);
            mini = min(mini , A[i]);
        }
        return maxprofit;
        
        
    }
};
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int n = candies.size();
        int maxEle = INT_MIN;
        for(int i=0;i<n;i++){
            maxEle = max(maxEle,candies[i]);
        }
        for(int i = 0; i<n;i++){
            ans.push_back(candies[i] + extraCandies >= maxEle);
        }
        return ans;

        
    }
};
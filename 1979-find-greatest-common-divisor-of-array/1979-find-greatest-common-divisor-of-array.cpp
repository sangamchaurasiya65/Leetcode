class Solution {
public:
    int findGCD(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int a = nums[0];
        // int b = nums[nums.size()-1];
        // while(a > 0 && b > 0){
        //     if(a>b){
        //         a = a%b;
        //     }else{
        //         b = b%a;
        //     }
        // }
        // if(a == 0){
        //     return b;
        // }else{
        //     return a;
        // }

        int mx = nums[0];
        int mn = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(mx<nums[i]){
                mx = nums[i];
            }
            if(mn>nums[i]){
                mn = nums[i];
            }
        }
        int gcd = 1;
        for(int i = 1;i<=mn;i++){
            if(mx%i==0 && mn%i==0){
                gcd = i;
            }
        }
        return gcd;











        
        
    }
};
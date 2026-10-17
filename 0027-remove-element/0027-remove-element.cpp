class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0 , j = 0;
        int n = nums.size()-1;
        while(i<=n){
            if(nums[i] == val ){
                i++;
            }else{
                nums[j] = nums[i]; 
                j++,i++;
            }
        }
        return j;
        
        
    }
};
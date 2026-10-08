class Solution {
public:
    int searchInsert(vector<int>& A, int target) {
        int st = 0 , end = A.size()-1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if (target == A[mid]){
                return mid;
            }
            else if (target < A[mid]){
                end = mid - 1;

            }else{
                st = mid + 1;
            }
        }
        return st;
        
    }
};
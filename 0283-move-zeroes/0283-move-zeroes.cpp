class Solution {
public:
    void moveZeroes(vector<int>& A) {
        int n = A.size()-1;
        int j = 0;
        for(int i = 0; i<=n; i++){
            if(A[i] != 0){
                A[j] = A[i];
                j++;
            }
        }
        while(j<=n){
            A[j] = 0;
            j++;
        }
        
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        int n =x;
        int temp;
        temp = n;
        long long rev=0;
        while(n>0){
            int d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        if(temp==rev){
            return true;
        }
        else{
            return false;
        }
    }
};
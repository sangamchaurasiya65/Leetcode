class Solution {
public:
    bool isAlphaNum(char ch) {
        if (ch >= '0' && ch <= '9' ||
            tolower(ch) >= 'a' && tolower(ch) <= 'z') {
            return true;
        } else {
            return false;
        }
    }
    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;
        while (st <= end) {
            if (!isAlphaNum(s[st])) {
                st++;
                continue;
            }
            if (!isAlphaNum(s[end])) {
                end--;
                continue;
            }
            if (tolower(st) != tolower(end)) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};
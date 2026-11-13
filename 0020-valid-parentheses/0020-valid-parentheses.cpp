class Solution {
public:
    bool isValid(string s) {
        stack<char>S;
        for(int i = 0; i<s.length(); i++){
           char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                S.push(ch);
            }else if(ch == ')' || ch == '}' || ch == ']'){
                if(S.empty()){
                   return false;
                }
                char top = S.top();
                S.pop();
                if((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')){
                    return false;
                }
            }
        }
        return S.empty();

        
    }
};

class Solution {
public:
    bool isValid(string s) {
        stack<char>S;
        char ch;
        for(int i = 0; i<s.length(); i++){
            ch = s[i];
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
        if(S.empty()){
           return true;
        }else{

             return false;
        }

        
    }
};
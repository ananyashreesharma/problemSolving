class Solution {
public:
    bool isValid(string s) {
        stack<int> stc;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                stc.push(s[i]);
            }
            else if(!stc.empty()){
                if(s[i]==')' and stc.top()=='(')
                stc.pop();
                else if(s[i]==']' and stc.top()=='[')
                stc.pop();
                else if(s[i]=='}' and stc.top()=='{')
                stc.pop();
                else 
                return false;
            }
            else 
                return false;
           
        }
        return stc.empty();
    }
};
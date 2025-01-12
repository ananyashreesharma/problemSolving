class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size();
        if(n%2!=0){
            return false;
        }
        int open_cnt=0;
        int close_cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' or locked[i]=='0'){
                open_cnt=open_cnt+1;
            }
            else{
                open_cnt=open_cnt-1;
            }
            if(open_cnt<0){
                return false;
            }
        }
           for(int i=n-1;i>=0;i--){
            if(s[i]==')' or locked[i]=='0'){
                close_cnt=close_cnt+1;
            }
            else{
            close_cnt=close_cnt-1;
            }
            if(close_cnt<0){
                return false;
            }
        }
        return true;
    }
};
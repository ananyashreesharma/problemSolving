class Solution {
public:
    bool isPalindrome(string s) {
        int a=0;
        int b=s.length()-1;
        while(a<b){
            while( a<b and !isalnum(s[a])) a++;
            while(a< b and !isalnum(s[b])) b--;
            if(tolower(s[a])!=tolower(s[b])) return false;
            a++;
            b--;


        }
        return true;
    }
};
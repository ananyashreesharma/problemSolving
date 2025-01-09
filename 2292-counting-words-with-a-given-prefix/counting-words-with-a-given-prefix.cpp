class Solution {
public:
    bool spornot(string& str1,  string& str2){
        int n1=str1.size();
        int n2=str2.size();
        
       
        return (str1.substr(0,n2)==str2 );
    }
    int prefixCount(vector<string>& words, string pref) {
         int n=words.size();
         int count = 0;

        for (int i = 0; i < n; i++) {
      
            if (spornot(words[i], pref)) {
                count++;
            }
        
    }

    return count;
    }
};
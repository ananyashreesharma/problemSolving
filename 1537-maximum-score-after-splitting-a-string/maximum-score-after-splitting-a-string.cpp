class Solution {
public:
    int maxScore(string s) {
        int onesc=0;
        int zerosc=0;
        int maxi=0;
        for(char i: s){
            if(i=='1'){
            onesc++;
            }
        }
        
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                zerosc++;
            }
            else{
                onesc--;
            }
            maxi=max(maxi,zerosc+onesc);
        }
        return maxi;
    }
};
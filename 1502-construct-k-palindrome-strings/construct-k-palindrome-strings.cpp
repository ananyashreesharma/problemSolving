class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int> quency;
        for(char i: s){
            quency[i]++;
        }
        int oddy=0;
        for(auto i: quency){
            if(i.second%2!=0){
                oddy=oddy+1;
            }
        }
        if(oddy>k or s.size()<k){
            return false;
        }
        return true;
    }
};
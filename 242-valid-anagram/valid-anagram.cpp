class Solution {
public:
    bool isAnagram(string s, string t) {
           if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> um;
        int n=s.size();
        for(int i=0;i<n;i++){
            um[s[i]]++;
            um[t[i]]--;
        }
        for(auto i:um){
            if(i.second!=0){
                return false;
            }
        }
        return true;
    }
};
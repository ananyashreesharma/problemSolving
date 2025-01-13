class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> mp;
        for(int i: s){
            mp[i]++;
        }
        int count;
        for(auto i:mp){
            if(i.second==1 or i.second%2!=0){
                count=count+1;
            }
           else if(i.second==2 or i.second%2==0){
            count=count+2;
           }
          
        }
        return count;
    }
};
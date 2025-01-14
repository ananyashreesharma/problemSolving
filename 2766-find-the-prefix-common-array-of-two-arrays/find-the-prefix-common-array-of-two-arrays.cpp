class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
     vector<int> ans;
     int n=a.size();
     int count=0;
     vector<int> freqarr(n+1,0);
    ;
    for(int i=0;i<n;i++){
    freqarr[a[i]]++;
    if(freqarr[a[i]]==2){
    count++;
    }
    freqarr[b[i]]++;
    if(freqarr[b[i]]==2){
    count++;
    }
    ans.push_back(count);
    }
    return ans;
    }
};
class Solution {
public:
    vector<int> getRow(int n) {
     vector<int> result(n+1,1);
     for(long long i=1;i<n;i++){
         result[i]=result[i-1]*(n-i+1)/i;
     }
     return result;
    }
};
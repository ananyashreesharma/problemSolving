class Solution {
public:
    vector<int> getRow(int row) {
       vector<int> result;
       result.push_back(1);
       long long ans=1;
       for(int col=1;col<row+1;col++){
        ans=ans*(row+1-col);
        ans=ans/col;
        result.push_back(ans);
       }
       return result;
    }
};
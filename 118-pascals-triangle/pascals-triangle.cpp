class Solution {
public:
    vector<int> generaterow(int row){
        vector<int> result;
        result.push_back(1);
        long long ans=1;
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/col;
            result.push_back(ans);
        }
        return result;
    }

    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};
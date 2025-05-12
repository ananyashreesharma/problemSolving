class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n=nums.size();
        vector<int> ans(n);
        vector<int> preefix(n,1) ;
        
        vector<int> posttfix(n,1);
        for(int i=1;i<n;i++){
            preefix[i]=(preefix[i-1]*nums[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            posttfix[i]=(posttfix[i+1]*nums[i+1]);
        }
        
        for(int i=0;i<n;i++){
            
            ans[i]=(preefix[i]*posttfix[i]);
        }
        return ans;
    }
    
};
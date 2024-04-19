class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int ans2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ans=ans+1;
            }
            if(nums[i]==0){
                if(ans2<ans){
                    ans2=ans;
                }
            ans=0;
            }
            
        }
        if(ans2<ans){
            return ans;
        }
        else {
            return ans2;
        }

    }
};
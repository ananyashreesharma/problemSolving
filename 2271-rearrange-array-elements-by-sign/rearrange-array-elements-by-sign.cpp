class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> neg;
        // vector<int> pos;
        // vector<int> final;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0){
        //         neg.push_back(nums[i]);
        //     }
        //     else if(nums[i]>0){
        //         pos.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<pos.size();i++){
        //     final.push_back(pos[i]);
        //     final.push_back(neg[i]);
        // }
        // return final;
        vector<int> ans(nums.size());
        int pos=0, neg=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos=pos+2;
            }
             else if(nums[i]<0){
                ans[neg]=nums[i];
                neg=neg+2;
            }
        }
        return ans;
    }
};
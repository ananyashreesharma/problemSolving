class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        vector<int> final;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else if(nums[i]>0){
                pos.push_back(nums[i]);
            }
        }
        for(int i=0;i<pos.size();i++){
            final.push_back(pos[i]);
            final.push_back(neg[i]);
        }

        
    

        return final;
    }
};
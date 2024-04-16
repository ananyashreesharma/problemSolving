class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int xorres=0;
      for(int i=0;i<nums.size();i++){
      xorres=xorres^nums[i];
    }
    return xorres;
    }
    
};
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int high=nums.size()-2;
        int low=1;
        if (nums.size()==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[high+1]!=nums[high]){
            return nums[high+1];
        }
      //  int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1] ){
               return nums[mid];

            }
            if(mid%2!=0){
                if(nums[mid]==nums[mid+1]){
                    high=mid-1;
                }
                else {
                    low=mid+1;
                }
            }
            else{
                if(nums[mid]==nums[mid+1]){
                    low=mid+2;
                }
                else{
                    high=mid-1;
                }
            }
            
        }
        return -1; 
       
    }
};
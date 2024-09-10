class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int high=nums.size()-2;
        int low=1;
        if(nums.size()==1){
            return 0;
        }

        if(nums[low-1]>nums[low]){
            return 0;
        }
          if(nums[high+1]>nums[high]){
            return nums.size()-1;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid]<nums[mid+1]){
                low=mid+1;
            }
             if(nums[mid]>nums[mid+1]){
                high=mid-1;
            }
        }
        return -1;

    }
};
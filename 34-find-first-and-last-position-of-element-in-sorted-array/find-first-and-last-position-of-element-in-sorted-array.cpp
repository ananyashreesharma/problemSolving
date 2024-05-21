class Solution {
public:
     int firstf(vector<int>& nums, int target) {
      int left=0;
      int right=nums.size()-1;
      int first=-1;
      while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]<target){
            left=mid+1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
        else{
            first=mid;
            right=mid-1;
        }
      }
      return first;
    }
    
      int lastl(vector<int>& nums, int target) {
          int left=0;
      int right=nums.size()-1;
      int last=-1;
      while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]<target){
            left=mid+1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
        else{
            last=mid;
            left=mid+1;
        }
      }
      return last;
      
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstf(nums,target);
        int last=lastl(nums,target);
        return {first, last};
    }
};
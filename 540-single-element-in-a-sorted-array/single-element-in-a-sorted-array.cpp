class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n=nums.size();
       // we will follow the odd even sequence in this question

       if(n==1){
        return nums[0];
       }


    //    if(nums[0]!=nums[1]){
    //     return nums[0];
    //    }
    //    if(nums[n-1]!=nums[n-2]){
    //     return nums[n-1];
    //    }
      int h=n-1;
      int l=0;
      while(l<=h){
        int mid=l+(h-l)/2;
        if(nums[mid]!=nums[mid+1] and nums[mid]!=nums[mid-1]){
            return nums[mid];
        }
       else if((nums[mid] == nums[mid-1] && mid % 2 != 0) || (nums[mid] == nums[mid+1] && mid % 2 == 0))
{
    l = mid + 1;
}
        else {
            h=mid-1;
        }
           if(nums[0]!=nums[1]){
        return nums[0];
       }
       if(nums[n-1]!=nums[n-2]){
        return nums[n-1];
       }
      }
      return -1;
    }
};
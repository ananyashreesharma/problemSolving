class Solution {
public:
    int search(vector<int>& nums, int target) {
      int low=0;
        int high=nums.size()-1;
        int answer=0;
        while(low<=high){
            int half=low+(high-low)/2;
            if(nums[half]==target){
                return half;
            }
          else  if(nums[half]<target){
           low=half+1;
        }
        else {
            high=half-1;
        }
       
        }
     
     return -1;
           
    }
};
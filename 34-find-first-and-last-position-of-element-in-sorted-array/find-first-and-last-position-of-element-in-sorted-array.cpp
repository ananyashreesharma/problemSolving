class Solution {
public:
    int lb(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
       
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
               ans=mid;
               high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
       if(ans==nums.size() or nums[ans]!=target){
        return -1;
       }
        return ans;

    }
    int ub(vector<int>& nums, int target) {
     int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
       
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
               ans=mid;
               high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
       
        return ans-1;

    }


    vector<int> searchRange(vector<int>& nums, int target) {
        
        int a=lb(nums,target);
        int b=ub(nums,target);
        if(a==-1){
            return {-1,-1};
        }
        else
        return {a,b};
    }
};
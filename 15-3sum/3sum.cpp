class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // vector<vector<int>> ans;
        // sort(nums.begin(),nums.end());
     
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0 and nums[i]==nums[i-1]){
        //         continue;
        //     }
        //      int left=i+1;
        //     int right=nums.size()-1;
        //     while(left<right){
        //       int sum=  nums[i]+nums[left]+nums[right];
        //       if(nums[i]+nums[left]+nums[right]==0){
        //         vector<int> temp;
        //         temp.push_back(nums[i]);
        //         temp.push_back(nums[left]);
        //         temp.push_back(nums[right]);
        //         ans.push_back(temp);
        //         left++;
        //         right--;
        //           while( left<right and nums[right]==nums[right+1]) right--;
        //             while( left<right and nums[left]==nums[left-1]) left++;
       
        //       }
        //       else if(nums[i]+nums[left]+nums[right]!=0){
        //         if(sum>0)
        //         right--;
        //         else if(sum<0){
        //             left++;
        //         }
        //       }
        //          }
            
        // }
        // return ans;

         vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int left = i + 1;
            int right = nums.size() - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    
                    // Skip duplicates for left
                    while (left < right && nums[left] == nums[left - 1])
                        left++;
                    
                    // Skip duplicates for right
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return ans;

    }
};
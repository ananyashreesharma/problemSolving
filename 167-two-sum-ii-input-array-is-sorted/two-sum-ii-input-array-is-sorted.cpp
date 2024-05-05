class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int left=0;
        int right=numbers.size()-1;
       
        while(left<right){
             int res=numbers[left]+numbers[right];
            if(res!=target){
                if(res>target){
                    right--;
                    
                }
                else if(res<target){
                    left++;
                }
            }
            else if(res==target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
           
        }
        return ans;
    }
};
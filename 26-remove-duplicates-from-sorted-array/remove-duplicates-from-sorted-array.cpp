class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // time while insertion-> O(nlogn) and space-> o(n)
        // set <int> s;
        // for(int i=0;i<nums.size();i++){
        //         s.insert(nums[i]);
        // }
        // int count =0;
        // for(auto i:s){
        //     nums[count]=i;
        //     count++;
        // }
        // return count;

        int count=0; 
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j]!=nums[i]){
                nums[j+1]=nums[i];
                j++;
            }   
        }
        return j+1;

    }
};
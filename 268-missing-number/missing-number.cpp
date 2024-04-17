class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //      int n=arr.size();
       
    //     int xor1=0;
    //     int xor2=0;
    //     for(int i=0;i<n;i++){
    //         xor1=xor1^i;
    //     }
    //      for(int i=0;i<n;i++){
    //         xor2=xor2^arr[i];
    //     }
    //    int ans=xor1^xor2;
    //    return ans;
     int missing = nums.size(); // Initialize missing as the last index

    // XOR all elements and indices
    for (int i = 0; i < nums.size(); i++) {
        missing ^= i ^ nums[i];
    }

    return missing;

       
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
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
    int n=nums.size();
    int sum1=n*(n+1)/2;
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        sum2=sum2+nums[i];
    }
    return sum1-sum2;
}

   
};
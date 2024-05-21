class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        //lower bound
        int left=0;
        int right=arr.size()-1;
        int ans=arr.size();
        while(left<=right){
           int  mid=left+(right-left)/2;
            if(arr[mid]>=target){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        
        }
        return ans;
    }
};
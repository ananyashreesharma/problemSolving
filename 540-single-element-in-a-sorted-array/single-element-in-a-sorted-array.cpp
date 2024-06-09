class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
  int n=arr.size();
        int ans=0;
        if(n==1){
            return arr[0]; 
        }
        if(arr[0]!=arr[1]){
            return arr[0];

        }
        if(arr[n-1]!=arr[n-2]){
            return arr[n-1];
            
        }
        int l=1;
        int h=n-2;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]!=arr[mid+1] and arr[mid]!=arr[mid-1]){
                return arr[mid];
            }
            if((arr[mid]==arr[mid-1] and mid%2!=0) or (arr[mid]==arr[mid+1] and mid%2==0))
            {
                l=mid+1;
                
            }
            else 
            {
               h=mid-1;
                
                
            }
            // else {
            //     return arr[mid];
            // }
       

            
        }
        
        return -1;
    }
};
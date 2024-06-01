class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        int h=n-2;
        int l=1;
        if(n==1) return 0;
        if (arr[0]>arr[1]) return 0;
        if (arr[n-1]>arr[n-2]) return n-1;
        
            while(l<=h){
                int mid=(l+h)/2;
                if(arr[mid+1]<arr[mid] and arr[mid-1]<arr[mid]){
                    return mid;
                }
                else if (arr[mid-1]<arr[mid] ){
                      l=mid+1;
                }
                else{
                    h=mid-1;
                }
                
            }
            return -1;
    }

};
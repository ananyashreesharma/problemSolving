class Solution {
public:
    int maxProfit(vector<int>& arr) {
       int mini=arr[0];
       int profit=0;
       for(int i=1;i<arr.size();i++){
        int kharcha=arr[i]-mini;
        if(mini>arr[i]){
            mini=arr[i];
        }
        if(kharcha>profit){
            profit=kharcha;
        }



       }
       return profit;

    }
};
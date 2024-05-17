class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        map<int,int> mp;
        int sum=0;
        int count=0;
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
         
            int rem=sum-k;
            cout<<rem;
            if(mp.find(rem)!=mp.end()){
                count=count+mp[rem];
            }
          mp[sum]++;
        }
        return count;
    }
};
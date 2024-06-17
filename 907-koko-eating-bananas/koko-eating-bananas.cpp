class Solution {
public:
   int maxi(vector<int>& piles){
     int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
       
        

        } 
        return maxi;
    }
   double total(vector<int>& piles, int hours){
    double ans=0;
    double n=piles.size();
        for(int i=0;i<n;i++){
            ans+=ceil((double)piles[i]/hours);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
     int l=1,r=maxi(piles);
       int result=r;
        while(l<=r){
          double mid=l+(r-l)/2;
           double t=total(piles,mid);
        //    if(t==h){
        //     return mid;
        //    }
        //    else 
          if(t<=h){
            result=mid;
            r=mid-1;
           }
           else{
            l=mid+1;
           }
        }
        return result;



       

    }
};
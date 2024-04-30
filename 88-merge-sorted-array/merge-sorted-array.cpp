class Solution {
public:
    void merge(vector<int>& arr1, int n, vector<int>& arr2, int m) {
        int last = arr1.size()-1;
        while( n>0 and m>0){
            if(arr1[n-1]>arr2[m-1]){
                arr1[last]=arr1[n-1];
                n--;
            }
           else  if(arr1[n-1]<=arr2[m-1]){
                arr1[last]=arr2[m-1];
                m--;
            }
            last--;
        }
        
            while(m>0){
                arr1[last]=arr2[m-1];
                last--;
                m--;
            }
        
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        int j=-1;
        if(n<=1){//corner case if there is a single element or no element in the array
            return;
        }
       for (int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
       }
       if(j==-1){//corner case if there is no zero
        return;
       }
       for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
       }
        
    }
};
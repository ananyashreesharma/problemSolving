class Solution {
public:
    void merge(vector<int>& arr1, int n, vector<int>& arr2, int m) {
        // int last=arr1.size()-1;
        //     if(m!=0 and n==0)
        // {  
        //  for(int i = 0; i < n; i++){
        //         arr1[i] = arr2[i];
        //     } return;
        // } 
        //   while(n>0 and m>0){
        //     if(arr1[n-1]>=arr2[m-1]){
        //         arr1[last]=arr1[n-1];
        //         n--;
        //     }
        //     else if(arr1[n-1]<=arr2[m-1]){
        //         arr1[last]=arr2[m-1];
        //         m--;
        //     }
        //     last--;
        //   }
         if (n == 0) {
        // If arr1 is empty, directly copy elements from arr2 to arr1
        for (int i = 0; i < m; i++) {
            arr1[i] = arr2[i];
        }
        return;
    }
    
    int last = arr1.size() - 1;
    while (n > 0 && m > 0) {
        if (arr1[n - 1] >= arr2[m - 1]) {
            arr1[last] = arr1[n - 1];
            n--;
        } else {
            arr1[last] = arr2[m - 1];
            m--;
        }
        last--;
    }
    
    // If elements in arr2 are remaining, copy them to arr1
    while (m > 0) {
        arr1[last] = arr2[m - 1];
        m--;
        last--;
    }   
    }
};
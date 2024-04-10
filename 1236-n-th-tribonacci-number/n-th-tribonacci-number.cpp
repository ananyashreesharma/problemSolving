class Solution {
public:
    int tribonacci(int n) {
              if(n<=0)
              return 0;
              if(n==1 or n==2)
              return 1;
        vector<int> v={0,1,1};

        for(int i=3;i<=n;i++){
            int add=v[0]+v[1]+v[2];
            v[0]=v[1];
            v[1]=v[2];
            v[2]=add;
        }
        int res=v[2];
        return res;





    //     if(n==0){
    //         return 0;
    //     }
    //     if(n==1){
    //         return 1;
    //     }
    //     if(n==2){
    //         return 1;
    //     }
    //     if(n==3){
    //         return 2;
    //     }
    //     int res=0;
    //     if(n<=0)
    //     return n;
    //     else
    //     {
    //         res=(n+1)+(n+2)+(n+3);
    //     }
    //    return res;
        
    }
};
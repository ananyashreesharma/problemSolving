class Solution {
public:
    int fib(int n) {
    //    if(n==0){
    //    return n;
    //    }


    //    int temp=n-2;
    //    n=n-2;
    //    int res=fib(n-2);
    //    res=res+temp;
    //    return res;  

     if (n <= 1)
        return n;
    else
        return fib(n-1) + fib(n-2);

    }
};
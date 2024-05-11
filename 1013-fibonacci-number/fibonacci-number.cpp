class Solution {
public:
    int fib(int n) {
        int x;
        if(n==1 || n==0 ) return n;
        else{
            x=fib(n-1)+fib(n-2);
        }
        return x;
    }
};
int mem[31]={0};
class Solution {
public:
    int fib(int n) {
        mem[0]=0;
        mem[1]=1;
        if (n==0) return 0;
        if (n==1) return 1;
        if (mem[n]!=0) return mem[n];
        int c=2;
        while(c<=n){
            if (mem[n]!=0){
                c++;
                continue;
            }
            mem[c]=mem[c-1]+mem[c-2];
            c++;
        }
        return mem[n];
    }
};

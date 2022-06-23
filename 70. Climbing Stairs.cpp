int mem[46]={0};
bool isInitialized=false;
void initialize(){
   mem[1]=1;
    mem[2]=2;
    for(int i=3;i<46;i++){
        mem[i]=mem[i-1]+mem[i-2];
    } 
    isInitialized=true;
}
class Solution {
public:
    int climbStairs(int n) {
        if (isInitialized)
            return mem[n];
        initialize();
        return mem[n];
    }
};

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> v(amount+1,INT_MAX-1);
        v[0]=0;
        for(int i=1;i<=amount;i++){
            for(int x: coins){
                if ((i-x)>=0) v[i]=min(v[i],v[i-x]+1);
            }
        }
        return (v[amount]==(INT_MAX-1))?-1:v[amount];
    }
};

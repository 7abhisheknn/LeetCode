class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0], max=prices[0], maxGain=0;

        for(int i=1;i<prices.size();i++){
            if (prices[i]>max){
                max=prices[i];
                if ((max-min)>maxGain) maxGain=max-min;
            }
            else if (prices[i]<min)
                min=max=prices[i];
        }

        return maxGain;
    }
};

class Solution {
public:
    
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned long long> v(target+1,0);
        v[0]=1;
        for(int i=1;i<=target;i++){
            for(int x: nums){
                if ((i-x)>=0) v[i]+=v[i-x];
            }
        }
        return v[target];
    }
};

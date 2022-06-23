class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int p=0, q=nums.size()-1;
        while((p<q)&&((nums[p]+nums[q])!=target)){
            if ((nums[p]+nums[q])<target)p++;
            else q--;
        }
        if ((nums[p]+nums[q])==target) return {p+1,q+1};
        else return {};
    }
};

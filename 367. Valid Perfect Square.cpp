class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=0,h=num/2+1;
        int mid=l+(h-l)/2;
        while(l<=h){
            double s=(double)mid*(double)mid;
            if (s==num) return true;
            if (s>num) h=mid-1;
            else l=mid+1;
            mid=l+(h-l)/2;
        }
        return false;
    }
};

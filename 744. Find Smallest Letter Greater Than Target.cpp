class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        bool foundSolution=false;
        char solChar='a';
        int low=0,high=letters.size()-1;
        int mid=low + (high-low)/2;
        while(low<=high){
            if ((letters[mid]-target)>0){
                foundSolution=true;
                solChar=letters[mid];
                high=mid-1;
            }
            else if ((letters[mid]-target)<=0){
                low=mid+1;
            }
            mid=low + (high-low)/2;
        }
        if (foundSolution){
            return solChar;
        }
        else return letters[0];
    }
};

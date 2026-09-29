class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int i;
        for( i=0; i<nums.size(); i++){
            if(i!=nums[i])
                return i;
        }
        return i;
    }
};

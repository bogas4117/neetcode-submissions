class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x = 0;
        int ctr = 0;
        int a = 0, b=0;
        for(int i: nums) {
            x^=i;
        }

         x=x&(-x);

         for(int i:nums) {
            if((i&x)==0)
                a^=i;
            else
                b^=i;
        }

        return {a,b};

    }
};
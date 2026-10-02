class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x = 0;
        int ctr = 0;
        int y = 0;

        for(int i: nums) {
            x^=i;
        }

         while((x&1)==0) {
            ctr++;
            x>>=1;
         }

         x=0;

         for(int i:nums) {
            if((i&(1<<ctr))==0)
                x^=i;
            else
                y^=i;
        }

        return {x,y};

    }
};
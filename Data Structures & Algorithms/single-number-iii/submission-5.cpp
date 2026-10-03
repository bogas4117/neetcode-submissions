class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> a;
        unordered_map<int,int> ctr;

        for(int i: nums)
            ctr[i]++;
        
        for( auto& i: ctr) {
            if(i.second==1)
                a.push_back(i.first);
        }

        return a;

    }
};
#include <string>

class Solution {
public:
    int reverse(int x) {
        string s = to_string(abs(x));
        std::reverse(s.begin(), s.end());
        long long n = stoll(s);
        
        if ((n>(1ll<<31)-1)||(n<-(1ll<<31)))
            return 0;
        else
            return x<0?-1*n:n;
    }
};

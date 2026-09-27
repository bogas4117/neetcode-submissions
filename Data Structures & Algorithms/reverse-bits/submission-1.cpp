#include <stdio.h>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
    uint32_t ans = 0;
    int i = 0;
    
    while(n>0) {
        ans = (ans) | ((n&1)<<(31-i));
        n=n>>1;
        i++;
    }
    
    return ans;
    }
    
};
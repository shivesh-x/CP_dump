class Solution {
public:
    int hammingWeight(uint32_t n) {
        long long temp=0;
        while(n!=0)
        {
            temp+=(n&1);
            n=n>>1;
        }
        return temp;
    }
};
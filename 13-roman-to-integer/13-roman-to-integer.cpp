class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        //cout<<n;
        unordered_map<char, int> a = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
        int num=a[s[n-1]];
        for(int i=n-2;i>=0;i--)
        {
            if(a[s[i]]>=a[s[i+1]])
                num+=a[s[i]];
            else
                num-=a[s[i]];
        }
        return num;
    }
};
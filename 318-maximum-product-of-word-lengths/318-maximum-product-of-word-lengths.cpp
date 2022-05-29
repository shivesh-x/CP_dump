class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int> mask(words.size(),0);
        int temp=0;
        for(int i=0;i<words.size();i++)
        {
            for(int j = 0; j < words[i].length(); j++)
                mask[i]=mask[i] | (1<<(words[i][j]-'a'));
            for (int k=0; k<i; ++k)
            if (!(mask[i] & mask[k]))
                temp = max(temp, int(words[i].size() * words[k].size()));
        }
        
        return temp;
    }
};
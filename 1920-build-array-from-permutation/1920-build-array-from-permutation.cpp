class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        int Size = nums.size();
        vector<int> ans(Size);
        for(int i=0;i<Size;i++)
        {
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};
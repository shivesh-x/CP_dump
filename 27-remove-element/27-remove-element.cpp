class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        cout<<len;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                len--;
                nums[i]=INT_MAX;
            }
        }
        sort(nums.begin(), nums.end());
        return len;
    }
};
class Solution {
public:
    int lengthOfLIS(vector<int>& nums)
    {
        int res = 1; 
        int n = nums.size();
        vector<int> v(n, 1);
        for (int i = 1; i < n; i++) 
        {
            for (int j = 0; j < i; j++) 
            {
                if (nums[i] > nums[j]) 
                {
                    v[i] = max(v[i], 1 + v[j]);
                }
            }
            res = max(res, v[i]);
        }
        return res;
    }
};

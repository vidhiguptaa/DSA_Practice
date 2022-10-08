class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int i=0;
        int csum=0;
        int maxsum=INT_MIN;
        while(i<nums.size())
        {
            csum+=nums[i];
            maxsum=max(maxsum,csum);
            if(csum<0)
            {
                csum=0;
            }
            i++;

        }
        return maxsum;
    }
};

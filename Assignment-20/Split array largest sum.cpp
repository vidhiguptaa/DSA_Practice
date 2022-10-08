
class Solution {
public:
   int splitArray(vector<int>& nums, int k) {
        int start=0;
        int end=0;
        int n=nums.size();
        for(int i=0;i<n;++i) 
        {
            start=max(start,nums[i]);
            end=end+nums[i];

        }
        int mid=0;
        int ans=0;
        while(start<=end){
            mid=(start+end)/2;
            int count=0;
            int tempsum=0;
            for(int i=0;i<n;++i)
            {
                if(tempsum+nums[i]<=mid)
                {
                    tempsum+=nums[i];
                } 
                else
                {
                    count++;
                    tempsum=nums[i];
                }
            }
            count++; 
            if(count<=k)
            {
                end=mid-1;
                ans=mid;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};

class Solution {
private:
    void permute(vector<int> nums,int i,vector<vector<int>> &a)
    {
        if(i>=nums.size())
        {
            a.push_back(nums);
            return;
        }
        
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            permute(nums,i+1,a);
            swap(nums[i],nums[j]);
            
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> a;
        int i=0;
        
        permute(nums,i,a);
        return a;
    }
};

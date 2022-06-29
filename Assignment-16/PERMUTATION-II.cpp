class Solution {
private:
    void permuteUnique(vector<int> nums, int i,vector<vector<int>>&a)
    {
        if(i>=nums.size())
        {
            a.push_back(nums);
            return;
        }
        
        for(int j=i;j<nums.size();j++)
        {
            if(i==j || nums[j]!=nums[i])
            {
                swap(nums[i],nums[j]);
                permuteUnique(nums,i+1,a);
                swap(nums[i],nums[j]);
                
            }
            
            
        }
    }
    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> a;
        int i=0;
        
        permuteUnique(nums,i,a);
        return a;
    }
};

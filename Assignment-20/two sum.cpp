class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target)
    {
        unordered_map<int,int>mp;
        int i;
        for(int i=0;i<a.size();i++)
        {
            if(mp.find(target-a[i])!=mp.end())
            {
                return {mp[target-a[i]],i};
            }
            mp[a[i]]=i;
            
        }
        return {};
        
    }
};

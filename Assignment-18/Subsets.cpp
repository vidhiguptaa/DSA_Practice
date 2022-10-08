
class Solution {
public:
    set<vector<int>>arr;
    int n;
    void recur(vector<int>& nums, int i, vector<int>a){
        if(i==n){
            sort(a.begin(), a.end());
            arr.insert(a);
            return;
        }
        recur(nums, i+1, a);
        a.push_back(nums[i]);
        recur(nums, i+1, a);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        recur(nums, 0,{});
        vector<vector<int>>ans(arr.begin(), arr.end());
        return ans;
    }
};

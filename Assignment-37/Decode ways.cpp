class Solution {
public:
    unordered_map<int,int>dp;
    int recursion(string s, int i)
    {
        int n=s.size();
        if(i==n)
        {
            return 1;
        }
        else if(s[i]=='0')
        {
            return 0;
        }
        else if(dp.find(i)!=dp.end())
        {
            return dp[i];
        }
        int ans=0;
        ans+=recursion(s,i+1);
        if(i+1<s.size())
        {
            int tenth=s[i]-'0';
            int zeroth= s[i+1]-'0';
            int num=tenth*10 + zeroth;
            if(num<=26)
            {
                ans+=recursion(s,i+2);
            }
        }
        return ans;
    }
    int numDecodings(string s) 
    {
        return recursion(s,0);
    }
};

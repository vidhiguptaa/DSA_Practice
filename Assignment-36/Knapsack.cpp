#include <bits/stdc++.h>
using namespace std;
int dp[2005]; 
int main()
{
    int a; 
    cin >> a;
    for (int i=0;i<a; i++)
    {
        memset(dp,0,sizeof(dp)); 
        int b,c;
        cin >> b >> c;
        vector <int> t;
        for (int j=0;j<b; j++)
        {
            int d;
            cin >> d;
            t.push_back(d);
        }
        dp[0]=1;
        int r=0; 
        for (int k=1; k<=c; k++)
        {
            for (int y=0;y<t.size(); y++)
            {
                if (t[y]>k)
                {
                    continue;
                }
                if (dp[k-t[y]])
                {
                    dp[k]=1;
                }  
            }
            if (dp[k])
            {
                r=k; 
            }
        }
        cout << r << endl; 
    }
    return 0;
}

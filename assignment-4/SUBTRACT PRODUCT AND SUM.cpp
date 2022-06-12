class Solution {
public:
    
    int subtractProductAndSum(long n)
    {
        cin >> n;
        int p=1,s=0;
        
        while(n>0)
        {
            p = p * (n%10);
            s = s + (n%10);
            n=n/10;
        }
        return p-s;
    };
};

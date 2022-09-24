int Solution::solve(int A, vector<int> &B) 
{
    int n=B.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + B[i];
    }
    int res=0;
    if(sum%3 ==0)
    {
        int c=0;
        int part1=sum/3;
        int part2= 2*part1;
        sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum=sum+B[i];
            if(sum==part2)
            {
               res=res+c;
            }
            if(sum==part1)
            {
                c++;
            }
        }
    }
    return res;
}


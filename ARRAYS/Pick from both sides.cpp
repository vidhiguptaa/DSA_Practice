int Solution::solve(vector<int>&A, int B) 
{
    int sum=0;
    int n= A.size();
    for(int i=0; i<B;i++)
    {
        sum=sum+A[i];
    }
    int res=sum;
    int add=n-1; 
    int sub=B-1;
    while(add>=0 && sub >=0)
    {
        sum=sum + A[add--] - A[sub--];
        res=max(res,sum);
    }
    return res;
    
}

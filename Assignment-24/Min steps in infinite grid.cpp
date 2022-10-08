int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
    int n=A.size();
    int res=0;
    for(int i=0;i<n-1;i++)
    {
        if(abs(A[i]-A[i+1])<=abs(B[i]-B[i+1]))
        {
            res+=abs(B[i]-B[i+1]);
        }
        else
        {
            res+=abs(A[i]-A[i+1]);
        }
    }
    return res;
    
}


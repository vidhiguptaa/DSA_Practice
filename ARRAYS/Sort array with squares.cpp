vector<int> Solution::solve(vector<int> &A)
{
    vector<int>res;
    int n=A.size();
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        while(start<=end)
        {
            int x = A[start]*A[start];
            int y = A[end]*A[end];
            if(x<=y)
            {
                res.push_back(y);
                end--;
            }
            else
            {
                res.push_back(x);
                start++;
            }
        }
        reverse(res.begin(),res.end());
        
    }
    return res;
}

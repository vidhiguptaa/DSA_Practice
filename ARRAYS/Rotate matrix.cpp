void Solution::rotate(vector<vector<int> > &A) {
    int i,j,t;
    for(i=0;i<A.size();i++)
    {
        for(j=i;j<A[i].size();j++)
        {
            swap(A[i][j],A[j][i]);
        }
    }
    i=0;j=A[0].size()-1;
    while(i<j)
    {
        t=0;
        while(t<A.size())
        {
            int temp=A[t][i];
            A[t][i]=A[t][j];
            A[t][j]=temp;
            t++;
        }
        i++;
        j--;
    }
}

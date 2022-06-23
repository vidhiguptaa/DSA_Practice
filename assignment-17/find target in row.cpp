#include<bits/stdc++.h>
using namespace std;
bool isTragetPresentInRow(vector<vector<int> >A, int target, int r)
{
    for(int i=0;i<A.size();i++)
    {
        //cout <<A[r][i]<<endl;
        if(A[r][i]==target)
        {
            return true;
        }
    }
    cout << endl;
    return false;
}
int main()
{
    vector<vector<int> >A={{1,2,3},{4,5,6}};
    int target;
    cin>> target;
    int r;
    cin>>r;
    if(isTragetPresentInRow(A,target,r))
    {
        cout << "present";
    }
    else
    {
        cout <<"not present";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target)
{
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            //cout << A[i][j]<< " ";
            if(A[i][j]==target)
            {
                return 1;
            }
        }
        //cout << endl;
        
    }
    return 0;
}
int main()
{
    vector<vector<int>>x={{1,2,3},{4,5,6}};

    int target;
    cin >> target;
    if(isTargetPresentIn2DVector(x,target))
    {
        cout << "present";
    }
    else
    {
        cout << "not present"<<endl;
    }
}

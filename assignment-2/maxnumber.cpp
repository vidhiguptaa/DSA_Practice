#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4],n,i;
    int max1,max2,int_min;
    cin >> n;
    for (int i = 0;i<n;i++)
    {
        cin >> a[i];
    }
    max1=max2=int_min;
    for (int i = 0;i<n;i++)
    {
        if (a[i]>=max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>=max2)
        {
            max2=a[i];
        }
    }
    cout << max1;
    cout << max2;

    return 0;
}

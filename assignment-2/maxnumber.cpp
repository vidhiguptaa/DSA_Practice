#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int max1,max2;
    cin >> n;
    int a[n];
    for (int i = 0;i<n;i++)
    {
        cin >> a[i];
    }
    max1=max2=INT_MIN;
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
    cout << max1 << endl;
    cout << max2 << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum=0;
    int max= INT_MIN;
    int min = INT_MAX;
    int arr[n];
    for (int i=0; i < n ; i++)
    {
        cin >> arr[i];
        if (arr[i]> max)
        {
            max=arr[i];
        }
        if (arr[i]< min)
        {
            min=arr[i];
        }
        sum= sum + arr[i];
        
    }
    cout << sum-max << endl;
    cout << sum-min << endl;
    return 0;
}

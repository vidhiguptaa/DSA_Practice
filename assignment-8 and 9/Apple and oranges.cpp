#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n;
    
    
    cin >> s >> t >> a >> b >> m ;
    int A[m];
    cin >> n ;
    int B[n];
    int count=0;
    int countt=0;
    
    
    for(int i = 0; i< m; i++)
    {
        cin >> A[i];
    }
    for(int j = 0; j< n; j++)
    {
        cin >> B[j];
    } 
    for(int i = 0; i< m; i++)
    {
        A[i]= A[i]+a;
        if (A[i]>=s && A[i]<=t)
        {
            count++;
            
        }
    }
    for(int j = 0; j< n; j++)
    {
        B[j]= B[j]+b;
        if (B[j]>=s && B[j]<=t)
        {
            countt++;
        }
    }
    cout << count << endl;
    cout <<countt <<endl;
}

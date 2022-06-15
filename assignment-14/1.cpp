/**1. Take n as input and print n rows where ith row will have i  #
if n=1 => output:
#

if n=2 => output:
#
##

if n=3 => output:
#
##
#### **/


include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   for(int i=0;i<=n;i++)
   {
       for(int j=1 ; j<=i;j++)
       {
           cout <<"#";
       }
       cout << endl;
   }
}


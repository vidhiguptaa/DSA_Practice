/**Take n as input and print n rows where ith row will have sum till i  #
if n=1 => output:
#


if n=2 => output:
# //sum till 1
### //sum till 2


if n=3 => output:
# //sum till 1
### //sum till 2
###### //sum till 3 **/

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int sum=0;
   for(int i=1;i<=n;i++)
   {
       sum=sum+i; 
       for(int j=1; j<=sum;j++)
       {
           
           cout <<"#";
       }
       cout << endl;
   }
}

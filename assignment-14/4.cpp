/**Take n (has to be power of 2) as input and print the following pattern
 if n=16 output:
 ################ =>16times
 ########  => 8 times
 #### => 4 times
 ## => 2 times
 # => 1 times **/


#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   for(int i=n;i>=1;i=i/2)
   {
       for(int j=i; j>=1;j--)
       {
           cout <<"#";
       }
       cout << endl;
   }
}

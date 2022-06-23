#include<bits/stdc++.h>
using namespace std;
vector<bool>a(1e6);
void recursion(string x,string s)
{
    
    if(x.size()==s.size())
    {
        cout<< x<<endl;
        return;
    }
    for(char i=0;i<s.size();i++)
    {
        if(a[i]==false)
        {
            a[i]=1;
            
            recursion(x+s[i],s);
            a[i]=0;
            
        }
        
    }
}
int main()
{
    string s="ab";

    recursion("",s);
    return 0;
}

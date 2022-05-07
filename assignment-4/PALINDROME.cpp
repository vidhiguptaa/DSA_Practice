#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
            
    int start = 0;
    int end = s.length() - 1;

    while(start < end)
    {
        if(s[start++] != s[end--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    if(isPalindrome(s)==true)
    {
        cout << "true";
        
    }
    else
    {
        cout << "false";
    }
    return 0;
}

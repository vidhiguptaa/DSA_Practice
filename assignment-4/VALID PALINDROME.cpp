#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
            
    int start = 0;
    int end = s.length() - 1;
    for (int i =0; i<=end ; i++)
    {
        s[i] = tolower(s[i]);
        while(start<end)
        {
            if (isalnum(start))
            {
                start++;
                
            }
            else if (isalnum(end))
            {
                end--;
            }
            else
            {
                if(s[start++] != s[end--])
                {
                    return false;
                    
                }
            }
            
            
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

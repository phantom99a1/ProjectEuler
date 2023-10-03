#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{

    for (int i = 0; i < s.length() / 2; ++i)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{

    int n;
    cin >> n;
    int ans = -1;
    for (int i = 999; i > 99; --i)
    {
        for (int j = 999; j > 99; --j)
        {
            int x = i * j;
            if ( x < n && x%11==0 )
            {
                string s = to_string(x);
                if (isPalindrome(s))
                {
                 ans = max(ans, x);
                }
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        
    }
}

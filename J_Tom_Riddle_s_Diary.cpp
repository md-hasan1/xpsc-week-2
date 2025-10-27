#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, bool> mp;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp[s])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
      mp[s] = true;
    }

    return 0;
}
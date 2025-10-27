#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, bool> mp;
        map<char, char> vl;
        string main;

        if (s.size() <= 1)
        {
            cout << s << endl;
            continue;
        }

        for (char c : s)
        {
            mp[c] = true;
        }

       
        vector<char> chars;
        for (auto p : mp)
        {
            chars.push_back(p.first);
        }

        int sz = chars.size();
        for (int i = 0; i < sz; ++i)
        {
            vl[chars[i]] = chars[sz - 1 - i]; 
        }

        for (char c : s)
        {
            main.push_back(vl[c]);
        }

        cout << main << endl;
    }

    return 0;
}
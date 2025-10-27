#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> mp, has;
    for (auto i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (has.find(a) != has.end())
        {

            // Misha ILoveCodeforcesg

            // ILoveCodeforces Misha

            // cout<<a<<endl;
            string s = has[a];
            mp[s] = b;
            has.erase(a);
            has[b] = s;
        }
        else
        {
            mp[a] = b;
            has[b] = a;
        }
    }

      cout<<mp.size()<<endl;
    for (auto value : mp)
    {
        cout << value.first << " " << value.second << endl;
    }
    // for (auto value : has)
    // {
    //     cout << value.first << " " << value.second << endl;
    // }

    return 0;
}
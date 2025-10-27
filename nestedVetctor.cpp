#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n;
    cout << n << endl;
    vector<vector<int>> v;

    for (auto i = 0; i < n; i++)
    {
        cin >> m;
        cout << m << endl;
        vector<int> a(m);
        for (auto j = 0; j < m; j++)
        {
            int value;
            cin >> value;
            cout<<value<<endl;
            a.push_back(value);
        }
        v.push_back(a);
        // cout << endl;
    }
    // for (auto i = 0; i < n; i++)
    // {

    //     for (auto j = 0; j < m; j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set<int> st;
        int ans = 0;

    
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.count(v[i]))
            {
                ans = i + 1;
                break;
            }
            st.insert(v[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}
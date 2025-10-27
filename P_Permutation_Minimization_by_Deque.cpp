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
        deque<int> dq;
        for (auto i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            if (dq.empty())
            {
                dq.push_back(v);
            }
            else if (v > dq.front())
            {
                dq.push_back(v);
            }
            else if (v < dq.front())
            {
                dq.push_front(v);
            }
            else if (v == dq.front())
            {
                dq.push_front(v);
            }
            else if (v == dq.back())
            {
                dq.push_back(v);
            }
        }


        for (auto a:dq)
        {
          cout<<a<<" ";
        }
        cout<<endl;
    }

    return 0;
}
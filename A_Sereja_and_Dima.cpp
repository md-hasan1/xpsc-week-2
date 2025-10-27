#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int s = 0, d = 0;
    deque<int> v;
    for (auto i = 0; i < n; i++)
    {
        int vl;
        cin >> vl;
        v.push_back(vl);
    }

    int ans1 = 0, ans2 = 0, who = 1;
    while (!v.empty())
    {
        int left = v.front(), right = v.back();
        int mx = max(left, right);
        if (who % 2 != 0)
        {
            ans1 += mx;
        }else{
            ans2+=mx;
        }

        if(mx==left){
            v.pop_front();
        }else{
            v.pop_back();
        }
        who++;
    }
cout <<ans1<<" "<<ans2;
    return 0;
}
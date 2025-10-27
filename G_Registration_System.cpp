#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      int n;
    cin >> n;
map<string, int> reg;

    while (n--) {
        string name;
        cin >> name;
        if (reg[name] == 0) {
            cout << "OK\n";
        } else {
            cout << name << reg[name] << "\n";
        }
        reg[name]++;
    }

return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string result;
        vector<int> lowerPos, upperPos;
        vector<bool> deleted(s.size(), false);

        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (c == 'b') {
                if (!lowerPos.empty()) {
                    deleted[lowerPos.back()] = true;
                    lowerPos.pop_back();
                }
            } else if (c == 'B') {
                if (!upperPos.empty()) {
                    deleted[upperPos.back()] = true;
                    upperPos.pop_back();
                }
            } else {
                if (islower(c)) lowerPos.push_back(i);
                else if (isupper(c)) upperPos.push_back(i);
            }
        }

        for (int i = 0; i < s.size(); ++i) {
            if (!deleted[i] && s[i] != 'b' && s[i] != 'B') {
                cout << s[i];
            }
        }
        cout << '\n';
    }

    return 0;
}
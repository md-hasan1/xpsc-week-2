#include <bits/stdc++.h>
using namespace std;

int typingTime(const string& s) {
    int time = 2; 
    for (int i = 1; i < s.size(); ++i) {
        time += (s[i] == s[i - 1]) ? 1 : 2;
    }
    return time;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        string best;
        int maxTime = -1;

        for (int i = 0; i <= s.size(); ++i) {
            for (char c = 'a'; c <= 'z'; ++c) {
                string temp = s.substr(0, i) + c + s.substr(i);
                int time = typingTime(temp);
                if (time > maxTime) {
                    maxTime = time;
                    best = temp;
                }
            }
        }

        cout << best << '\n';
    }

    return 0;
}
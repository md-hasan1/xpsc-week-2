#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<pair<char, char>, int> mp;

    for (int i = 0; i < n - 1; i++) {
        mp[{s[i], s[i + 1]}]++;
    }

    pair<char, char> maxPair;
    int maxCount = 0;

    for (const auto& entry : mp) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            maxPair = entry.first;
        }
    }

    cout << maxPair.first << maxPair.second << endl;

    return 0;
}
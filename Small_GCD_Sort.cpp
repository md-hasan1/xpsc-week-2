#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<pair<int, int>> players;

        for (int i = 1; i <= N; i++) {
            int score = gcd(i, N);
            players.push_back({-score, i}); 
        }

        sort(players.begin(), players.end());

        for (auto p : players) {
            cout << p.second << " ";
        }
        cout << endl;
    }

    return 0;
}
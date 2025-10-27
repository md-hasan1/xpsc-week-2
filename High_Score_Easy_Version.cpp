#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        unordered_map<int, int> freqA, freqB;
        long long sumA = 0, sumB = 0;

        for (int i = 0; i < N; ++i) {
            int x;
            cin >> x;
            freqA[x]++;
            sumA += x;
        }

        for (int i = 0; i < M; ++i) {
            int y;
            cin >> y;
            freqB[y]++;
            sumB += y;
        }

        long long penalty = 0;
        for (auto& [val, countA] : freqA) {
            if (freqB.count(val)) {
                int common = min(countA, freqB[val]);
                penalty += 1LL * val * common * 2;
            }
        }

        cout << (sumA + sumB - penalty) << endl;
    }

    return 0;
}
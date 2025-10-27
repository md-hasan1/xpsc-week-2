#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int se = 0, so = 0;

        for (int i = x; i <= y; i++) {
            if (i % x == 0) {
                if (i % 2 == 0)
                    se += i;
                else
                    so += i;
            }
        }

        if (se >= so)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
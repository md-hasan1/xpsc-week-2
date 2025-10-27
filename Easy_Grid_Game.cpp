#include<bits/stdc++.h>
using namespace std;
int main() {

        int T;
    cin >> T;

    while (T--) {
        long long a11=0, a12=0, a21=0, a22=0;
        cin >> a11 >> a12 >> a21 >> a22;

        long long d1 = a11 + a22;
        long long d2 = a12 + a21;

        cout << min(d1, d2) << endl;
    }

    return 0;
    return 0; 
}
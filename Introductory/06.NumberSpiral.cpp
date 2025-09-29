#include <bits/stdc++.h>

using namespace std;

#define int long long


signed main() {
    int t;
    cin >> t;

    while(t--) {
        int y, x;
        cin >> y >> x;

        if (y > x) {
            int ans = (y - 1) * (y - 1);
            int add = 0;

            if (y % 2 == 0) {
                add = 2 * y - x;
            } else {
                add = x;
            }

            cout << ans + add << endl;
        } else {
            int ans = (x - 1) * (x - 1);
            int add = 0;

            if (x % 2 == 0) {
                add = y;
            } else {
                add = 2 * x - y;
            }

            cout << ans + add << endl;
        }
    }

    return 0;
}

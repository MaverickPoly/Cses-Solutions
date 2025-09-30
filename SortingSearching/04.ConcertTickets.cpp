#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    multiset<int> ms;
    for (int i = 0; i < n; i++) {
        int cur;
        cin >> cur;

        ms.insert(cur);
    }

    for (int i = 0; i < m; i++) {
        int cur;
        cin >> cur;

        auto bound = ms.upper_bound(cur);
        if (bound == ms.begin()) {
            cout << -1 << endl;
        } else {
            bound--;
            cout << *bound << endl;
            ms.erase(bound);
        }
    }

    return 0;
}

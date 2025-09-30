#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        arr.push_back({a, +1});
        arr.push_back({b + 1, -1});
    }

    sort(arr.begin(), arr.end());

    int cur = 0, res = 0;
    for (auto [x, delta] : arr) {
        cur += delta;
        res = max(cur, res);
    }

    cout << res << endl;

    return 0;
}

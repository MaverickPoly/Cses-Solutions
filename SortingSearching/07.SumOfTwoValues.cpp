#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr[i] = {val, i + 1};
    }

    sort(arr.begin(), arr.end());

    int start = 0, end = n - 1;
    bool found = false;
    while(start < end) {
        int s = arr[start].first + arr[end].first;
        if (s == x) {
            found = true;
            cout << arr[start].second << " " << arr[end].second << endl;
            break;
        } else if (s > x) {
            end--;
        } else {
            start++;
        }
    }

    if (!found) {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}

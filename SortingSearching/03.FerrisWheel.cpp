#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    int cnt = 0;
    int l = 0;
    int r = n - 1;
    while (l < r) {
        if (arr[l] + arr[r] <= x) {
            cnt++;
            l++;
            r--;
        } else {
            r--;
        }
    }

    cout << n - cnt << endl;

    return 0;
}

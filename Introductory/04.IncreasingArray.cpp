#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (long long &t : arr) cin >> t;

    long long cnt = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            cnt += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    cout << cnt << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (long long &x : arr) cin >> x;

    sort(arr.begin(), arr.end());
    long long mid = arr[n / 2];

    long long total = 0;
    for (int i = 0; i < n; i++) {
        total += abs(arr[i] - mid);
    }

    cout << total << endl;

    return 0;
}

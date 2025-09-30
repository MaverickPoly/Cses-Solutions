#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (long long &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    long long target = 1;
    for (long long c : arr) {
        if (c > target) break;
        target += c;
    }

    cout << target << endl;
    
    return 0;
}

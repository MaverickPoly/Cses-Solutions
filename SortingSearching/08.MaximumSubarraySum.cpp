#include <bits/stdc++.h>

using namespace std;

long long algorithm1(long long n, vector<long long>& arr) {
    long long best = 0;
    for (long long a = 0; a < n; a++) {
        for (long long b = a; b < n; b++) {
            long long sum = 0;
            for (long long i = a; i < b; i++) {
                sum += arr[i];
            }
            best = max(best, sum);
        }
    }

    return best;
}

long long algorithm2(long long n, vector<long long>& arr) {
    long long best = 0;
    for (long long a = 0; a < n; a++) {
        long long sum = 0;
        for (long long b = a; b < n; b++) {
            sum += arr[b];
            best = max(best, sum);
        }
    }

    return best;
}

long long algorithm3(long long n, vector<long long>& arr) {
    long long best = 0, cur = 0;
    for (long long i = 0; i < n; i++) {
        cur = max(arr[i], arr[i] + cur);
        best = max(best, cur);
    }
    return best;
}

long long findMax(int n, vector<long long>& arr) {
    long long m = arr[0];
    for (long long val : arr) {
        m = max(m, val);
    }
    return m;
}


int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (long long &t : arr) cin >> t;

    // int res1 = algorithm1(n, arr);
    // int res2 = algorithm2(n, arr);
    // int res3 = algorithm3(n, arr);

    // cout << "Res1: " << res1 << endl;
    // cout << "Res2: " << res2 << endl;
    // cout << "Res3: " << res3 << endl;

    long long res = algorithm3(n, arr);
    if (res == 0) {
        cout << findMax(n, arr);
    } else {
        cout << res << endl;
    }
        
    return 0;
}

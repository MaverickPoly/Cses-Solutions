#include <bits/stdc++.h>
using namespace std;

long long modpow(long long base, long long p, long long m) {
    long long res = 1;
    base %= m;
    while(p > 0) {
        if (p & 1) res = (res * base) % m;
        base = (base * base) % m;
        p >>= 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    long long m = 1000000007;
    long long res = modpow(2, n, m);
    cout << res << endl;

    return 0;
}

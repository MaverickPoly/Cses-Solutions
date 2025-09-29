#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (__int128_t k = 1; k <= t; k++) {
        __int128_t total = k * k * (k * k - 1) / 2;
        __int128_t invalid = 4 * (k - 1) * (k - 2);
        cout << (long long)(total - invalid) << endl;
    }

    return 0;
}

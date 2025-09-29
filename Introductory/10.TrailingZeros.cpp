#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for (long long p = 5; p <= n; p *= 5) {
        cnt += n / p;
    }
    cout << cnt << endl;

    return 0;
}

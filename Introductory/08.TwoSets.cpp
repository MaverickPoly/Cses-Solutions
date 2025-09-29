#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long s = 1LL * n * (n + 1) / 2;
    if (s % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> set1, set2;

    if (n % 4 == 0) {
        for (int i = 1; i <= n/2; i++) {
            if (i % 2 == 0) {
                set1.push_back(i);
                set1.push_back(n - i + 1);
            } else {
                set2.push_back(i);
                set2.push_back(n - i + 1);
            }
        } 
    } else {
        set1.push_back(1);
        set1.push_back(2);
        set2.push_back(3);

        int j = 0;
        for (int i = 4; i <= n; i+=2, j++) {
            if (j % 2 == 0) {
                set1.push_back(i);
                if (i + 1 <= n) set2.push_back(i + 1);
            } else {
                set2.push_back(i);
                if (i + 1 <= n) set1.push_back(i + 1);
            }
        }
    }

    cout << "YES" << endl;
    cout << set1.size() << endl;
    for (int x : set1) cout << x << " ";

    cout << endl;
    cout << set2.size() << endl;
    for (int x : set2) cout << x << " ";

    return 0;
}

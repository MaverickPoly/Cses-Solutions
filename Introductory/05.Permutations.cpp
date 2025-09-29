#include <bits/stdc++.h>

using namespace std;

/*
5
4 2 5 3 1

6
5 3 1 6 4 2
*/


int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    if (n <= 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> arr(n);

    if (n % 2 == 0) {
        for (int i = n - 1; i >= 1; i-=2) {
            cout << i << " ";
        }
        for (int i = n; i >= 2; i-=2) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        for (int i = n - 1; i >= 2; i-=2) {
            cout << i << " ";
        }
        for (int i = n; i >= 1; i-=2) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

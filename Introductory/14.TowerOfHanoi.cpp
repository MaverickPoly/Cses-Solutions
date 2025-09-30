#include <bits/stdc++.h>
using namespace std;

/*
3
1 2
1 3
2 3

  -
 ---
*/

void hanoi(int n, int from, int to, int aux, vector<pair<int, int>>& res) {
    if (n == 1) {
        res.push_back({from, to});
        return;
    }
    hanoi(n - 1, from, aux, to, res);
    res.push_back({from, to});
    hanoi(n - 1, aux, to, from, res);
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> arr;
    hanoi(n, 1, 3, 2, arr);

    cout << arr.size() << endl;
    for (auto [a, b] : arr) {
        cout << a << " " << b << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<int> vals;
    while(n != 1) {
        vals.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }
    if (n) 
        vals.push_back(n);

    for (int val : vals) cout << val << " ";
    cout << endl;

    return 0;
}

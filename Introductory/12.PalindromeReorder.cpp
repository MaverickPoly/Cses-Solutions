#include <bits/stdc++.h>
using namespace std;

int main() {
    string st;
    cin >> st;

    vector<int> freq(26, 0);
    for (char ch : st) freq[ch - 'A']++;

    int oddCount = 0, oddChar = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
            oddChar = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string left = "", middle = "", right = "";
    for (int i = 0; i < 26; i++) {
        string part = string(freq[i] / 2, i + 'A');
        left += part;
        right = part + right;
        freq[i] = freq[i] % 2 == 0 ? 0 : 1;
    }

    if (oddChar != -1) {
        middle = string(freq[oddChar], oddChar + 'A');
    }
    cout << left + middle + right << endl;

    return 0;
}

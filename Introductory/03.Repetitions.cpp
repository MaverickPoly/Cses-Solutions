#include <bits/stdc++.h>

using namespace std;

/*
int curLen = 0, int maxLen = 0;

for (int i = 1; i < (int)st.size(); i++) {
    if (st[i] == st[i - 1]) {
        curLen++;
    } else {
        maxLen = max(maxLen, curLen);
        curLen = 1;
    }
}
maxLen = max(maxLen, curLen);
cout << maxLen << endl;
*/

int main() {
    string st;
    cin >> st;

    int start = 0;
    int m = 0;
    int length = 0;
    char current = st[start];
    while(start + length <= st.size()) {
        if (st[start + length] == current) {
            length++;
        } else {
            m = max(m, length);
            start += length;
            length = 0;
            current = st[start];
        }
    }
    cout << m << endl;

    return 0;
}

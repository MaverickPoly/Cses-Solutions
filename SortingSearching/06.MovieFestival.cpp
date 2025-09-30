#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> arr(n);

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    arr[i] = {b, a};
  }

  sort(arr.begin(), arr.end());

  int last_end = 0, cnt = 0;
  for (auto [end, start] : arr) {
    if (start >= last_end) {
      last_end = end;
      cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(2, 0), b(2, 0), c(n), d(n);
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      a[x]++;
      c[i] = x;
    }
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      b[x]++;
      d[i] = x;
    }
    int ans = n + 2;
    if (c == d) ans = 0;
    else {
      int op = 0;
      for (int i = 0; i < n; i++) {
        op += c[i] ^ d[i];
      }
      ans = min(ans, op);
    }
    ans = min(ans, min(abs(a[0] - b[0]), abs(a[1] - b[1])) + 1);
    cout << ans << '\n';
  }
  return 0;
}

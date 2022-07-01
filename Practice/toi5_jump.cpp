#include <bits/stdc++.h>
using namespace std;
deque<pair<int, int> > q;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n, k, x, i, ans = 0;
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        cin >> x;
        while (!q.empty() && x - q.front().second > k)
            q.pop_front();
        q.push_back({i, x});
        ans = max(ans, q.back().first - q.front().first);
    }
    cout << ans;
}

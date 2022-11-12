#include <bits/stdc++.h>
using namespace std;
int mk[35][35], di[4] = {1, 0, -1, 0}, dj[4] = {0, 1, 0, -1};
char t[35][35];
queue<pair<int, int> > q;
int main() {
    int h, w, n, i, j, a, b, c, d, l, ch;
    cin >> h >> w >> n;
    for (i = 1; i <= h; i++)
        for (j = 1; j <= w; j++)
            cin >> t[i][j];
    while (n--) {
        memset(mk, 0, sizeof mk);
        cin >> a >> b >> c >> d >> l;
        q.push({a, b});
        mk[a][b] = 1;
        ch = 0;
        while (!q.empty()) {
            auto tt = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
                int ii = tt.first + di[k], jj = tt.second + dj[k];
                if (ii < max(1, a - l) || ii > min(h, a + l) || jj < 1 || jj > w || mk[ii][jj]) continue;
                if (t[ii][jj] == '#') continue;
                mk[ii][jj] = 1;
                q.push({ii, jj});
                if (ii == c && jj == d) ch = 1;
            }
        }
        cout << ch << "\n";
    }
}
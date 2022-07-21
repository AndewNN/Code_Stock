#include <bits/stdc++.h>
using namespace std;
int p[100100], a[300100], b[300100], n;  // a ban, b pee
int fp(int i) {
    if (p[i] == i)
        return i;
    return p[i] = fp(p[i]);
}
int main() {
    int m, i, aa, bb, ch;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
        p[i] = i;
    for (i = 1; i <= m; i++)
        a[i] = 1;
    for (i = 1; i <= n; i++) {
        scanf("%d %d", &aa, &bb);
        ch = 0;
        if (fp(aa) == fp(bb)) {
            if (a[fp(aa)] - b[fp(aa)] > 0)
                b[fp(aa)]++, ch = 1;
        } else if (a[fp(aa)] + a[fp(bb)] - b[fp(aa)] - b[fp(bb)] > 0) {
            a[fp(aa)] += a[fp(bb)];
            b[fp(aa)] += b[fp(bb)];
            p[fp(bb)] = fp(p[aa]);
            b[fp(aa)]++;
            ch = 1;
            // printf("in\n");
        }
        // printf("%d %d %d\n", fp(p[aa]), a[fp(p[aa])], b[fp(p[aa])]);
        printf(ch ? "YES\n" : "NO\n");
    }
}
/*

6 4
1 2
1 3
1 2
1 2
1 3
2 4

*/
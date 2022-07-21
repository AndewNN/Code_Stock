#include <bits/stdc++.h>
using namespace std;
int p[100100], a[100100], n;
int fp(int i) {
    if (p[i] == i)
        return i;
    return p[i] = fp(p[i]);
}
int main() {
    int i, m, aa, bb;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++) {
        scanf("%d", &aa);
        p[i] = i;
        a[i] = aa;
    }
    while (m--) {
        scanf("%d %d", &aa, &bb);
        if (fp(p[aa]) == fp(p[bb]))
            printf("-1\n");
        else {
            if (a[fp(aa)] < a[fp(bb)])
                swap(aa, bb);
            else if (a[fp(aa)] == a[fp(bb)] && aa > bb)
                swap(aa, bb);
            a[fp(p[aa])] += a[fp(p[bb])] / 2;
            p[fp(p[bb])] = fp(p[aa]);
            printf("%d\n", fp(p[aa]));
        }
    }
}
/*

5 4
3
4
5
6
7
1 5
1 2
1 2
3 4

5 2
3
4
5
6
7
1 3
3 5

*/
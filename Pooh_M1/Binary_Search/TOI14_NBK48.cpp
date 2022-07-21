#include <bits/stdc++.h>
using namespace std;
long long a[100100], n, q;
int main() {
    long long i, la, l, r, mid, p;
    scanf("%lld %lld", &n, &q);
    for (i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    la = a[n];
    for (i = n; i >= 1; i--) {
        if (a[i] > la)
            a[i] = la;
        la = a[i];
    }
    while (q--) {
        scanf("%lld", &p);
        l = 0, r = n;
        while (l != r) {
            mid = (l + r + 1) / 2;
            if (p >= a[mid])
                l = mid;
            else
                r = mid - 1;
        }
        printf("%d\n", l);
    }
}
/*

5 3
10 20 -10 30 60
31
52
9

*/
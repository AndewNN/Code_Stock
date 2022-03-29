/*
algo : recursive
*/
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    if (b > a)
        swap(a, b);
    return gcd(b, a % b);
}
int main() {
    long long i, n, ans = 1, now;
    scanf("%lld", &n);
    while (n--) {
        scanf("%lld", &now);
        ans = ans * now / gcd(ans, now);
    }
    printf("%lld\n", ans);

}
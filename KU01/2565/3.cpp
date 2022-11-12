#include <bits/stdc++.h>
using namespace std;
int p[20000], qs[20000];
void prime() {
    p[2] = 1;
    for (int i = 3; i < 16000; i += 2)
        p[i] = 1;
    int sq = sqrt(16000);
    for (int i = 3; i < sq; i += 2) {
        if (p[i]) {
            for (int j = i * i; j < 16000; j += i)
                p[j] = 0;
        }
    }
    for (int i = 1; i < 16000; i++)
        qs[i] = qs[i - 1] + p[i];
}
int main() {
    int i, j, a, b, sum = 0;
    prime();
    cin >> a >> b;
    for (i = a; i <= b; i++)
        for (j = i; j <= b; j++) {
            sum += qs[i + j + b] - qs[i + 2 * j - 1];
        }
    cout << sum;
}
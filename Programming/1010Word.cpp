#include<bits/stdc++.h>
using namespace std;
char a[50][50], b[50];
int n, m, ch, si, sj, len, di[8] = { -1,-1,0,1,1,1,0,-1 }, dj[8] = { 0,1,1,1,0,-1,-1,-1 };
void play(int i, int j, int s, int k) {
    if (s == len - 1) {
        if (!ch)
            printf("%d %d\n", si, sj);
        ch = 1;
        return;
    }

    int ii = i + di[k], jj = j + dj[k];
    if (ii < 0 || jj < 0 || ii >= n || jj >= m)    return;
    if (a[ii][jj] == b[s + 1]) {
        play(ii, jj, s + 1, k);
    }

    return;
}
int main() {
    int i, j, q;
    scanf("%d %d", &n, &m);
    for (i = 0;i < n;i++)
        for (j = 0;j < m;j++) {
            scanf(" %c", &a[i][j]);
            a[i][j] = tolower(a[i][j]);
        }
    scanf("%d", &q);
    while (q--) {
        scanf(" %s", b);
        for (i = 0;i < strlen(b); i++)b[i] = tolower(b[i]);
        len = strlen(b);
        ch = 0;
        for (i = 0;i < n;i++)
            for (j = 0;j < m;j++) {
                if (a[i][j] == b[0]) {
                    si = i, sj = j;
                    for (int k = 0;k < 8;k++)
                        play(i, j, 0, k);
                }
            }
    }

}
/*

8 11
ascDEFGhigg
hTqkComPutk
FayUcompuTm
FcsierMqsrc
bkoArUePeyv
Klcbqwekumk
sreTNIophtb
yUiqlxcnBje
4
Compute
Queue
stack
pointer

*/
#include<bits/stdc++.h>
using namespace std;
char a[30][30], b[20];
int n, m, ch, si, sj, len, di[8] = { -1,-1,0,1,1,1,0,-1 }, dj[8] = { 0,1,1,1,0,-1,-1,-1 }, mk[30][30];
void play(int i, int j, int s) {
    if (s == len - 1) {
        if (!ch)
            printf("%d %d\n", si, sj);
        ch = 1;
        return;
    }
    for (int k = 0;k < 8;k++) {
        int ii = i + di[k], jj = j + dj[k];
        if (ii < 0 || jj < 0 || ii >= n || jj >= m || mk[ii][jj])    continue;
        if (a[ii][jj] == b[s + 1]) {
            mk[ii][jj] = 1;
            play(ii, jj, s + 1);
            mk[ii][jj] = 0;
        }
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
        for (i = 0;i < strlen(b);b[i] = tolower(b[i]), i++);
        len = strlen(b);
        ch = 0;
        for (i = 0;i < n;i++)
            for (j = 0;j < m;j++) {
                if (a[i][j] == b[0]) {
                    si = i, sj = j;
                    mk[i][j] = 1;
                    play(i, j, 0);
                    mk[i][j] = 0;
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
ieruraosucdq

*/
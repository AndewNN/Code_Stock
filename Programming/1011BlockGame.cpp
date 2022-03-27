#include<bits/stdc++.h>
using namespace std;
char a[10][10], di[4] = { -1,0,1,0 }, dj[4] = { 0,1,0,-1 };
int sco, m, n;
void play(int i, int j);
void fall() {
    for (int i = m - 1;i >= 0;i--)
        for (int j = 0;j < n;j++) {
            if (a[i][j] != '#' && a[i][j] != '-') {
                int ii = i, jj = j;
                while (ii <= m - 2 && a[ii + 1][jj] == '-') {
                    swap(a[ii][jj], a[ii + 1][jj]);
                    ii++;
                }
                play(ii, jj);
            }
        }
}
bool move(int i, int j, char opr) {
    if (i < 0 || j < 0 || i >= m || j >= n || a[i][j] == '-' || a[i][j] == '#')
        return false;
    if (opr == 'R' && j <= n - 2 && a[i][j + 1] == '-') {
        swap(a[i][j], a[i][j + 1]);
        fall();
        return true;
    }
    else if (opr == 'L' && j > 0 && a[i][j - 1] == '-') {
        swap(a[i][j], a[i][j - 1]);
        fall();
        return true;
    }
    return false;
}
void play(int i, int j) {
    int ch = 0;
    for (int k = 0;k < 4;k++) {
        int ii = i + di[k], jj = j + dj[k];
        if (ii < 0 || jj < 0 || ii >= m || ii >= n)continue;
        if (a[ii][jj] != a[i][j])continue;
        ch = 1;
        a[ii][jj] = '-';
        sco += 5;
    }
    if (ch) {
        a[i][j] = '-';
        sco += 5;
        fall();
    }
    return;
}
int main() {
    int i, j, q;
    char opr;
    scanf("%d %d", &m, &n);
    for (i = 0;i < m;i++)
        for (j = 0;j < n;j++)
            scanf(" %c", &a[i][j]);
    scanf("%d", &q);
    while (q--) {
        scanf("%d %d %c", &i, &j, &opr);
        bool p = move(i, j, opr);
        if (!p)
            sco -= 5;
    }
    printf("%d\n", sco);
    for (i = 0;i < m;i++) {
        for (j = 0;j < n;j++)
            printf("%c ", a[i][j]);
        printf("\n");
    }
}
/*

4 5
# A - - #
# # - B #
# A B # #
# # # # #
2
1 3 L
0 1 R

5 5
# A - B #
# B - A #
# # - B #
# A B # #
# # # # #
3
0 1 L
0 3 L
0 1 R

*/
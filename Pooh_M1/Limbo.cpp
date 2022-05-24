#include <bits/stdc++.h>
using namespace std;
char a[100][1010];
int di[4] = {-1, 0, 1, 0}, dj[4] = {0, 1, 0, -1}, w, h, l, ma = -1, mk[100][1010];
void play(int i, int j)
{
    for (int k = 0; k < 4; k++)
    {
        int ii = i + di[k], jj = j + dj[k];
        if (ii < 0 || ii >= h || jj < 0 || jj >= w)
            continue;
        if (a[ii][jj] == '.' || mk[ii][jj])
            continue;
        mk[ii][jj] = 1;
        l++;
        printf("%d %d %d\n", ii, jj, l);
        play(ii, jj);
    }
    return;
}
int main()
{
    int i, j;
    scanf("%d %d", &w, &h);
    for (i = 0; i < h; i++)
        for (j = 0; j < w; j++)
            scanf(" %c", &a[i][j]);
    for (i = 0; i < h; i++)
        for (j = 0; j < w; j++)
        {
            if (a[i][j] == '*')
            {
                l = 1;
                mk[i][j] = 1;
                play(i, j);
                mk[i][j] = 0;
                ma = max(ma, l);
            }
        }
    printf("%d\n", ma);
}
/*

10 5
..*.....**
.**..*****
.*...*....
..****.***
..****.***

3 2
...
.**

*/
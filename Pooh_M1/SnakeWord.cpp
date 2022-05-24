#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;
int n, m, ma[25][25], di[4] = {-1, 0, 1, 0}, dj[4] = {0, 1, 0, -1}, l, ans[110][2], ch;
char a[25][25], aa[110];
void play(int i, int j, int state)
{
    ans[state][0] = i + 1, ans[state][1] = j + 1;
    if (state == l - 1)
    {
        ch = 1;
        for (int k = 0; k < l; k++)
            printf("%d %d\n", ans[k][0], ans[k][1]);
        return;
    }
    for (int k = 0; k < 4; k++)
    {
        int ii = i + di[k], jj = j + dj[k];
        if (ii < 0 || jj < 0 || ii >= n || jj >= m)
            continue;
        if (a[ii][jj] != aa[state + 1])
            continue;
        ma[ii][jj] = 1;
        play(ii, jj, state + 1);
        ma[ii][jj] = 0;
    }
}

int main()
{
    int i, j, q;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf(" %s", a[i]);
    scanf("%d", &q);
    while (q--)
    {
        ch = 0;
        scanf(" %s", aa);
        l = strlen(aa);
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
            {
                if (a[i][j] == aa[0])
                {

                    ma[i][j] = 1;
                    play(i, j, 0);
                    ma[i][j] = 0;
                }
            }
        if (!ch)
            printf("No Matching Word\n");
    }
}
/*

3 5
TAEPE
TULAR
STOPW
2
PEATT
HELLOWORLD

*/

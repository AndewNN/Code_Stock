#include <bits/stdc++.h>
using namespace std;
char a[100][1010];
int di[4] = {-1, 0, 1, 0}, dj[4] = {0, 1, 0, -1}, w, h, l, ma = -1, mk[100][1010];
struct A
{
    int i, j;
};
A t;
queue<A> q;
int main()
{
    int i, j;
    scanf("%d %d", &w, &h);
    for (i = 0; i < h; i++)
        scanf(" %s", a[i]);
    for (i = 0; i < h; i++)
        for (j = 0; j < w; j++)
        {
            if (a[i][j] == '*')
            {
                l = 0;
                q.push({i, j});
                while (!q.empty())
                {
                    t = q.front();
                    q.pop();
                    if (a[t.i][t.j] != '*')
                        continue;
                    l++;
                    a[t.i][t.j] = '.';
                    for (int k = 0; k < 4; k++)
                    {
                        int ii = t.i + di[k], jj = t.j + dj[k];
                        if (ii < 0 || jj < 0 || ii >= h || jj >= w)
                            continue;
                        if (a[ii][jj] != '*')
                            continue;
                        q.push({ii, jj});
                    }
                }
            }
            ma = max(ma, l);
        }
    printf("%d", ma);
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
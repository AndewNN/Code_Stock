#include<bits/stdc++.h>
using namespace std;
int dir, x, y;
string o, dd = "ESWN";
int main() {
    int n, s, ch = 1;
    scanf("%d", &n);
    while (n--) {
        scanf(" %s %d", o, &s);
        if (o == "LT")  dir = (dir - 1) % 4;
        if (o == "RT")  dir = (dir + 1) % 4;
        if (o == "BW")  dir = (-dir) % 4;

        if (dir == 0)    x += s;
        if (dir == 1)    y -= s;
        if (dir == 2)    x -= s;
        if (dir == 3)    y += s;

        if (abs(x) >= 50000 || abs(y) >= 50000)
            ch = 0;
    }
    if (ch)
        printf("%d %d\n%c", x, y, dd[dir]);
    else
        printf("DEAD");

}
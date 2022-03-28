#include<bits/stdc++.h>
using namespace std;
double di[4], di2[4];
char x[10];
int main() {
    int i, d, len;
    scanf(" %s", x);
    while (x[0] != '*')
    {
        d = 0;
        len = strlen(x);
        for (i = 0;i < len;i++) {
            if (isdigit(x[i]))
                d *= 10, d += x[i] - '0';
            else break;
        }
        if (len - i == 1) {
            if (x[i] == 'N')        di[0] += d;
            else if (x[i] == 'E')   di[1] += d;
            else if (x[i] == 'S')   di[0] -= d;
            else if (x[i] == 'W')   di[1] -= d;
        }
        else {
            if (x[i] == 'N' && x[i + 1] == 'E')         di2[0] += d, di2[1] += d;
            else if (x[i] == 'S' && x[i + 1] == 'E')    di2[0] -= d, di2[1] += d;
            else if (x[i] == 'N' && x[i + 1] == 'W')    di2[0] += d, di2[1] -= d;
            else if (x[i] == 'S' && x[i + 1] == 'W')    di2[0] -= d, di2[1] -= d;
        }
        scanf(" %s", x);
    }
    printf("%.3f %.3f\n", di[0] + sqrt(0.5) * di2[0], di[1] + sqrt(0.5) * di2[1]);
    printf("%.3f", sqrt(pow((di[0] + sqrt(0.5) * di2[0]), 2) + pow((di[1] + sqrt(0.5) * di2[1]), 2)));

}
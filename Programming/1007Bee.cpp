#include<bits/stdc++.h>
using namespace std;
int fi[40] = { 0,1 };
int main() {
    int i, n;
    for (i = 2;i <= 27;i++)
        fi[i] = fi[i - 1] + fi[i - 2] + 1;
    scanf("%d", &n);
    while (n != -1)
    {
        printf("%d %d\n", fi[n + 1], fi[n + 2]);
        scanf("%d", &n);
    }



}
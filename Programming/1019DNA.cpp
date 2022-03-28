/*
algo : Longest Common Substring
*/
#include<bits/stdc++.h>
using namespace std;
int dp[220][220];
char a[220], b[220];
int main() {
    int i, j, la, lb, mx = -1, ii;
    scanf(" %s %s", a + 1, b + 1);
    la = strlen(a + 1), lb = strlen(b + 1);
    //longest common substring
    for (i = 1;i <= la;i++)
        for (j = 1;j <= lb;j++) {
            if (a[i] == b[j])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            if (dp[i][j] > mx) {
                mx = dp[i][j];
                ii = i;
            }
        }
    for (i = 0;i < mx;i++)
        printf("%c", a[ii - mx + 1 + i]);
}
/*
AAAACTGCTACCGGT
CTGAATCTACTGCTATTGCAA
*/
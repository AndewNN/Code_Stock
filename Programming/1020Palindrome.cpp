/*
algo : Longest Common Substring
*/
#include<bits/stdc++.h>
using namespace std;
int dp[220][220];
char a[220], b[220];
int main() {
    int la, lb, i, j, ch = 0, ch2 = 0;
    scanf(" %s", a + 1);
    la = lb = strlen(a + 1);
    for (i = 0;i < la;i++)
        a[i + 1] = tolower(a[i + 1]), b[la - i] = a[i + 1];
    for (i = 1;i <= la;i++)
        for (j = 1;j <= lb;j++)
            if (a[i] == b[j])
                dp[i][j] = dp[i - 1][j - 1] + 1;
    ch = (dp[la][lb] == la);
    memset(dp, 0, sizeof dp);
    for (i = 1;i <= la / 2;i++)
        for (j = 1;j <= lb / 2;j++)
            if (a[i] == b[j + lb / 2 + lb % 2])
                dp[i][j] = dp[i - 1][j - 1] + 1;
    ch2 = (dp[la / 2][lb / 2] == la / 2);
    if (ch2)
        printf("Double ");
    if (ch)
        printf("Palindrome");
    else
        printf("No");

}


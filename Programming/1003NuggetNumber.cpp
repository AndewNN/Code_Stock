/*
algo : Nugget, Bottom Up
*/
#include<bits/stdc++.h>
using namespace std;
int dp[110], s[5] = { 6,9,20 };
int main() {
    int i, j, n, ch = 0;
    scanf("%d", &n);
    dp[6] = dp[9] = dp[20] = 1;
    for (i = 6;i <= 100;i++)
        for (j = 0;j < 3;j++)
            if (i - s[j] >= 0 && dp[i - s[j]] == 1)
                dp[i] = 1;
    for (i = 0;i <= n;i++)
        if (dp[i] == 1)
            printf("%d\n", i), ch = 1;
    if (!ch)
        printf("no");

}
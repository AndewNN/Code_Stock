/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[110][10100],dp[110][10100];
struct A{
    int x,i;
};
deque<A> deq;
int main()
{
    int n,m,k,i,j,l,ma=-1;
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    for(i=1;i<=n;i++){
        l = 1;
        for(j=1;j<=m;j++){
            for( ;l<=min(m,j+k);l++){
                while(!deq.empty() && deq.back().x<dp[i-1][l])
                    deq.pop_back();
                deq.push_back({dp[i-1][l],l});
            }
            while(!deq.empty() && deq.front().i<j-k)
                deq.pop_front();
            dp[i][j]=a[i][j]+deq.front().x;
        }
        deq.clear();
    }
    for(i=1;i<=m;i++)
        ma=max(ma,dp[n][i]);
    printf("%d\n",ma);
    return 0;
}
/*

3 2 0
99 98
30 40
60 52

8 5 2
0 0 5 4 0
2 0 7 0 0
0 8 0 3 0
9 0 0 0 0
0 0 1 9 0
0 0 0 0 9
0 0 0 0 9
9 0 1 0 0

2 10 3
1 2 3 4 5 6 7 8 9 10
1 9 2 8 3 7 4 6 5 5

*/

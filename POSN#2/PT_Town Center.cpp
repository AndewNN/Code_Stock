/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int d[1010][1010];
int main()
{
    int i,j,q,n,w;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++){
                scanf("%d",&w);
                d[i][j]=w;
            }



    }

    return 0;
}


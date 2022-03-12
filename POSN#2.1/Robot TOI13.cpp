/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
queue<PII> q;
int dis[2010][2010],xx[110],yy[110];
char a[2010][2010]
int main()
{
    int n,m,i,j,state=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='X')
                xx[state]=i,yy[state++]=j;
    }
    for(i=0;i<state;i++)
    {


    }



    return 0;
}

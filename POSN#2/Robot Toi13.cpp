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
PII temp;
int dis[2020][2020],xi[2020],xj[2020],ai[2020],aj[2020],s[2020][2020],di[4]={1,0,-1,0},dj[4]={0,1,0,-1},ma[2020][2020];
char a[2020][2020];
int main()
{
    int n,m,i,j,statea=0,statex=0,ii,jj,ce=0,cou=0;;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='W')
                s[i][j]=-1;
            if(a[i][j]=='A')
            {
                s[i][j]=-10;
                ai[statea]=i;
                aj[statea]=j;
                statea++;
            }
            if(a[i][j]=='X')
            {
                s[i][j]=-100;
                q.push({i,j});
                ma[i][j]=1;
            }
        }
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        i=temp.first,j=temp.second;
        if(s[i][j]==-10)
        {
            ce++;
            cou+=dis[i][j];
        }
        for(int k=0;k<4;k++)
        {
            ii=i+di[k],jj=j+dj[k];// -1 : wall , -10 : egg , -100 : robot
            if(ii<0||jj<0||ii>=n||jj>=m)
                continue;
            if(dis[ii][jj]!=0)
                continue;
            if(ma[ii][jj])
                continue;
            if(s[ii][jj]==-1||s[ii][jj]==-100)
                continue;
            if(s[i][j]==-100)
                dis[ii][jj]=1;
            else
                dis[ii][jj]=dis[i][j]+1;
            ma[i][j]=1;
            q.push({ii,jj});
        }
    }
    printf("%d %d\n",ce,cou*2);
    return 0;
}
/*

5 5
EEEEE
AEAEW
WEEWW
WEEXE
WWEXA

5 5
WEEEE
AWEEW
WEEWW
WEEXE
WWEEE

*/

/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[300100],s[300100][2],t[300100][2];
int fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}
int main()
{
    int q,v,e,m,i,a,b,state=0,cou=0,ch=0,k;
    scanf("%d",&q);
    for(k=1;k<=q;k++)
    {
        ch=0,state=0,cou=0;
        scanf("%d %d %d",&v,&e,&m);
        for(i=1; i<=v; i++)
            p[i]=i;
        for(i=0; i<m; i++) //must do
            scanf("%d %d",&s[i][0],&s[i][1]);
        for(i=0; i<e; i++) // build
            scanf("%d %d",&t[i][0],&t[i][1]);
        for(i=0; i<e; )
        {
            p[fr(t[i][0])]=fr(t[i][1]);
            i++;
            while(state<m&&(fr(s[state][0])==fr(s[state][1])))
                state++;
            if(state==m)
            {
                ch=1;
                break;
            }
        }
        if(ch)
            printf("C#%d : %d",k,i);
        else
            printf("-1");


    }

    return 0;
}
/*

1
5 5 5
1 2
1 3
3 2
4 5
2 5
1 5
2 3
1 4
1 3
2 5

*/

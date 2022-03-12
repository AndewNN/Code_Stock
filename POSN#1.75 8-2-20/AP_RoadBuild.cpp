/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[300100],mm[250100][2],ee[250100][2],e1,e2;
int fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}
int main()
{
    int q,v,e,m,i,state=0,j,ch;
    scanf("%d",&q);
    for(j=1; j<=q; j++)
    {
        ch=1;
        state=0;
        scanf("%d %d %d",&v,&e,&m);
        for(i=1;i<=v;i++)
            p[i]=i;
        for(i=0; i<m; i++)
            scanf("%d %d",&mm[i][0],&mm[i][1]);
        for(i=1; i<=e; i++)
            scanf("%d %d",&ee[i][0],&ee[i][1]);
        for(i=1; i<=e; i++)
        {
            e1=ee[i][0],e2=ee[i][1];
            p[fr(e1)]=fr(e2);
            while(1)
            {
                if(state<m && (fr(p[mm[state][0]])==fr(p[mm[state][1]])))
                    state++;
                else
                    break;
            }
            if(state==m)
            {
                printf("C#%d: %d\n",j,i);
                ch=0;
                break;
            }
        }
        if(ch)
            printf("C#%d: %d\n",j,-1);
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

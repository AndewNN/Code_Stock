/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A
{
    int x,y,i,s;
    bool operator<(const A&o)const
    {
        if(x!=o.x)
            return x < o.x;
        else
            return y < o.y;
    }
};
A a[1010];
int ans[1010];
int main()
{
    int q,k,i,n,j,x,y,state,e1,e2,ch;
    scanf("%d",&q);
    for(k=1;k<=q;k++)
    {
        ch=1;
        e1=e2=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&x,&y);
            a[i].x=x,a[i].y=y,a[i].i=i;
        }
        printf("Case #%d: ",k);
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            x=a[i].x,y=a[i].y;
            if(x>=e1)
            {
                a[i].s=1;
                e1=y;
                continue;
            }
            if(x>=e2)
            {
                a[i].s=2;
                e2=y;
                continue;
            }
            ch=0;
            printf("IMPOSSIBLE\n");
            break;
        }
        for(i=0;i<n;i++)
            ans[a[i].i]=a[i].s;
        for(i=0;i<n;i++)
            a[i].i=0,a[i].s=0,a[i].x=0,a[i].y=0;
        if(!ch)
            continue;
        for(i=0;i<n;i++)
        {
            if(ans[i]==1)
                printf("C");
            if(ans[i]==2)
                printf("J");
        }
        printf("\n");
    }
    return 0;
}
/*

4
3
360 480
420 540
600 660

3
0 1440
1 3
2 4

5
99 150
1 100
100 301
2 5
150 250

2
0 720
720 1440


*/

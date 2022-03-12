/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000100],aa[1000100],n,cou,m,cc;
void play(int i,int state,int a1,int a2,int s1,int s2)// L -> 0 , P -> 1
{
    cc++;
    int ch=0;
    a[state]=i;
    if(state == n)
    {
        ch=1;
        cou++;
        cou%=m;
        for(int i=1; i<=state; i++)
            if(a[i]!=aa[i])
                ch=0;
        if(ch)
            printf("%d %d\n",cou,cc);
        return;
    }
    if(abs(a1+1-a2)<=2 && s1+1 <= 2)
        play(1,state+1,a1+1,a2,s1+1,0);
    if(abs(a1-a2-1)<=2 && s2+1 <= 2)
        play(0,state+1,a1,a2+1,0,s2+1);


}
int main()
{

    int q,i;
    char o;
    scanf("%d",&q);
    while(q--)
    {
        cou=0;
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)
        {
            scanf(" %c",&o);
            if(o=='L')
                aa[i]=1;
            else
                aa[i]=0;
        }
        play(1,0,0,0,0,0);
    }

    return 0;
}
/*

1
50 1000000000
PLPLPLPLPLPLPLPLPLPLPLPLPLPLPLPLPLPLPLPLPLPLPLPLPL

*/

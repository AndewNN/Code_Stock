/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
int ans[110],a,b,n;
void play(int aa,int bb,int state)
{
    if(aa==n || bb==n)
    {
        for(int i=0;i<state;i++)
        {
            if(ans[i]==1)
                printf("W ");
            else
                printf("L ");
        }
        printf("\n");
        return;
    }
    ans[state]=1;
    play(aa+1,bb,state+1);
    ans[state]=0;
    play(aa,bb+1,state+1);

}
using namespace std;
int main()
{
    int i,j;
    scanf("%d %d %d",&n,&a,&b);
    play(a,b,0);

    return 0;
}

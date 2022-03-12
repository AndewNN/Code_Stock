/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,now,coua,coub,s,l=-1,stak=0;
    scanf("%d",&n);
    coua=coub=n;
    for(i=0; i<2*n; i++)
    {
        scanf("%d",&now);
        s=now%2;
        if(l==s)
            stak++;
        if(l!=s)
            stak=0;
        if(s==0)
        {
            if(stak>=2)
                coub-=3;
            else
                coub--;
        }
        if(s==1)
        {
            if(stak>=2)
                coua-=3;
            else
                coua--;
        }
        l=s;
        if(coua<=0)
        {
            printf("1 \n%d",now);
            return 0;
        }
        if(coub<=0)
        {
            printf("0 \n%d",now);
            return 0;
        }

    }

    return 0;
}

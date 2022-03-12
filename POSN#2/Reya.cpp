/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long cou,sum;
char c[110];
int main()
{
    long long i,j,n,m,q;
    scanf("%lld",&q);
    while(q--)
    {
        scanf(" %s %lld",c,&m);
        if(strlen(c)>=7)
            j=1000000;
        else
            j=atoi(c);
        if(m==1)
        {
            printf("0\n");
            continue;
        }
        for(i=0,sum=1,cou=1; i<=j; i++)
        {
            cou*=i;
            cou%=m;
            sum+=cou;
            sum%=m;
        }
        printf("%lld\n",sum);
    }
    return 0;
}


/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long n,b,c;
struct A
{
    long long a[6][6];
};
A t;
A mul(A a,A b)
{
    for(long long i=0; i<n; i++)
        for(long long j=0; j<n; j++)
        {
            t.a[i][j]=0;
            for(long long k=0; k<n; k++)
            {
                t.a[i][j]+=a.a[i][k]*b.a[k][j];
                t.a[i][j]%=c;
            }
        }
    return t;
}
A mod(A a,long long b)
{
    if(b==0)
    {
        for(long long i=0; i<n; i++)
            for(long long j=0; j<n; j++)
            {
                if(i==j)
                    t.a[i][j]=1;
                else
                    t.a[i][j]=0;
            }
        return t;
    }
    if(b==1)
        return a;
    A tt=mod(a,b/2);
    if(b%2==0)
        return mul(tt,tt);
    return mul(mul(tt,tt),a);

}
int main()
{
    long long m;
    scanf("%lld",&n);
    for(long long i=0; i<n; i++)
        for(long long j=0; j<n; j++)
        {
            scanf("%lld",&m);
            t.a[i][j]=m;
        }
    scanf("%lld %lld",&b,&c);
    A hh=mod(t,b);
    for(long long i=0; i<n; i++)
    {
        for(long long j=0; j<n; j++)
            printf("%lld ",hh.a[i][j]);
        printf("\n");
    }
    return 0;
}
/*

2
5 8
21 6
2 100

*/

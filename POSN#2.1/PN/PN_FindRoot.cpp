/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int m;
struct A{
    int a,b,c,d;
};
A mul(A a,A b)
{
    int aa,bb,cc,dd;
    aa = a.a*b.a + 2*a.b*b.b + 3*a.c*b.c + 6*a.d*b.d;
    bb = a.a*b.b +   a.b*b.a + 3*a.c*b.d + 3*a.d*b.c;
    cc = a.a*b.c +   a.c*b.a + 2*a.b*b.d + 2*a.d*b.b;
    dd = a.a*b.d +   a.b*b.c +   a.c*b.b +   a.d*b.a;
    A tt={aa%m,bb%m,cc%m,dd%m};
    return tt;

}
A play(A a,int p)
{
    if(p==1)
        return a;
    A tt = play(a,p/2);
    if(p%2==0)
        return mul(tt,tt);
    return mul(mul(tt,tt),a);
}
int main()
{
    int q,p,a,b,c;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d %d %d %d",&a,&b,&c,&p,&m);
        A tt = play({a,b,c,0},p);
       //A tt = mul({a,b,c,0},{a,b,c,0});
        printf("%d %d %d %d\n",tt.a%m,tt.b%m,tt.c%m,tt.d%m);
    }


    return 0;
}
/*

1
1 1 1 2 10

*/

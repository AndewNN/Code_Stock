#include<bits/stdc++.h>
using namespace std;
long long n;
struct A{
    long long a[10][10];
};
A mk,ans,base;
A mul(A a,A b,long long c){
    A d;
    long long i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            d.a[i][j] = 0;
            for(k=1;k<=n;k++){
                d.a[i][j] += a.a[i][k] * b.a[k][j];
                d.a[i][j] %= c;
            }
        }
    }
    return d;
}
A P(A a,long long b,long long c){
    if(b==1) return a;
    A tm = P(a,b/2,c);
    if(b%2==1) return mul(tm,mul(tm,a,c),c);
    else       return mul(tm,tm,c);
}
int main()
{
    long long i,j,b,c;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%lld",&mk.a[i][j]);
        }
    }
    scanf("%lld %lld",&b,&c);
    if(b > 0){
        ans = P(mk,b,c);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                printf("%lld ",ans.a[i][j]);
            }
            printf("\n");
        }
    }else{
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i == j){
                    printf("1 ");
                }else{
                    printf("0 ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

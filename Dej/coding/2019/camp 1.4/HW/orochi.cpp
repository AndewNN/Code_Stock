#include<bits/stdc++.h>
using namespace std;
long long a[110][110],mk[110][110];
int main()
{
    long long n,m,i,j,b,c=0,d;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    if(n==1){
        c= 0;
        for(i=1;i<=m;i++){
            c +=a[1][i];
        }
        printf("%lld\n",c);
        for(i=1;i<=m;i++){
            printf("1 ");
        }
    }else{
    for(j=m-1;j>=1;j--){
        for(i=1;i<=n;i++){
            if(i==1){
                b = min(a[n][j+1],min(a[i][j+1],a[i+1][j+1]));
                a[i][j]+=b;
                if(b == a[i][j+1]){
                    mk[i][j] = i;
                }else if(b == a[i+1][j+1]){
                    mk[i][j] = i+1;
                }else{
                    mk[i][j] = n;
                }
            }else if(i == n){
                b = min(a[i-1][j+1],min(a[i][j+1],a[1][j+1]));
                a[i][j]+=b;
                if(b == a[1][j+1]){
                    mk[i][j] = 1;
                }else if(b == a[i-1][j+1]){
                    mk[i][j] = i-1;
                }else{
                    mk[i][j] = i;
                }
            }else{
                b = min(a[i-1][j+1],min(a[i][j+1],a[i+1][j+1]));
                a[i][j]+=b;
                if(b == a[i-1][j+1]){
                    mk[i][j] = i-1;
                }else if(b == a[i][j+1]){
                    mk[i][j] = i;
                }else{
                    mk[i][j] = i+1;
                }
            }
        }
    }
    b = a[1][1];
    for(i=1;i<=n;i++){
        b = min(b,a[i][1]);
    }
    printf("%lld\n",b);
    for(i=1;i<=n;i++){
        if(b == a[i][1]){
            printf("%lld ",i);
            c = 1;
            d = i;
            for(j=2;j<=m;j++){
                printf("%lld ",mk[d][c]);
                d = mk[d][c];
                c = j;
            }
            break;
        }
    }
    }
    return 0;
}

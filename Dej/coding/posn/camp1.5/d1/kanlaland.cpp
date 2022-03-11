/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long p[100100],q[100100],w[100100];
int fin(long long i){
if(p[i]==i) return i;
else return p[i] = fin(p[i]);
}
int main()
{
    long long j,i,n,D,x,y;
    scanf("%lld %lld",&n,&D);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&x,&y);
        p[i] = i;
        q[i] = x*y;
        w[i] = 1;
    }
    for(j=1;j<=D;j++){
        scanf("%lld %lld",&x,&y);
        printf("Day: %lld\n",j);
        if(fin(x)==fin(y)){
            printf("Family don't need to make war\n");
        }else if(q[fin(x)]>q[fin(y)]){
            printf("Winner Family %lld\n",fin(x));
            w[fin(x)] += w[fin(y)];
            q[fin(x)] += q[fin(y)];
            p[fin(y)] = fin(x);
        }else if(q[fin(x)]<q[fin(y)]){
            printf("Winner Family %lld\n",fin(y));
           w[fin(y)] += w[fin(x)];
            q[fin(y)] += q[fin(x)];
            p[fin(x)] = fin(y);
        }else if((w[fin(x)]<w[fin(y)])){
            printf("Winner Family %lld\n",fin(y));
            w[fin(y)] += w[fin(x)];
            q[fin(y)] += q[fin(x)];
            p[fin(x)] = fin(y);
        }else if((w[fin(x)]>w[fin(y)])){
            printf("Winner Family %lld\n",fin(x));
            w[fin(x)] += w[fin(y)];
            q[fin(x)] += q[fin(y)];
            p[fin(y)] = fin(x);
        }else{
        printf("Draw\n");
        }
    }
    return 0;
}

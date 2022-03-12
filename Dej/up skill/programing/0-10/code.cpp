#include<bits/stdc++.h>
using namespace std;
int a[10],b[10],c[10],an[100100],ab[10][10],ac[10][10],bc[10][10],abc[10][10][10];
int main()
{
    int n,i,A,B,C;
    long long ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&an[i]);
        A = an[i]/100;
        B = (an[i]%100)/10;
        C = an[i]%10;
        a[A]++;
        b[B]++;
        c[C]++;
        ab[A][B]++;
        ac[A][C]++;
        bc[B][C]++;
        abc[A][B][C]++;
    }
    for(i=0;i<n;i++){
        A = an[i]/100;
        B = (an[i]%100)/10;
        C = an[i]%10;
        ans += a[A]+b[B]+c[C]-ab[A][B]-ac[A][C]-bc[B][C]+abc[A][B][C]-1;
        a[A]--;
        b[B]--;
        c[C]--;
        ab[A][B]--;
        ac[A][C]--;
        bc[B][C]--;
        abc[A][B][C]--;
    }
    printf("%lld\n",ans);
    return 0;
}

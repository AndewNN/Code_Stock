#include<bits/stdc++.h>
using namespace std;
int x[100100],y[100100],sum[100100];
int main()
{
    int i,n,a,b,ans=0;
    for(i=2;i<=100000;i++){
        sum[i]+=sum[i-1]+i-1;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        x[a]++,y[b]++;
    }
    for(i=1;i<=100000;i++){
        if(x[a]>=2){
            ans+= (sum[x[a]] * (n-x[a]));
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int tree[1100];
int main()
{
    int n,i,k,a,sum=0;
    scanf("%d",&n);
    for(i=n/2+1;i<=n;i++){
        scanf("%d",&tree[i]);
    }
    for(i=n/2;i>=1;i--){
        tree[i] = min(tree[2*i],tree[2*i+1]);
        sum+= max(tree[2*i],tree[2*i+1])-min(tree[2*i],tree[2*i+1]);
    }
    sum+= tree[1];
    printf("%d\n",sum);
    return 0;
}

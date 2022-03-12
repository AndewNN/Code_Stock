#include<bits/stdc++.h>
using namespace std;
int tree[1<<22];
int main()
{
    int n,q,a,b,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&tree[i]);
    }
    scanf("%d",&q);
    for(i=n-1;i>=0;i--){
        if(2*i+2<=n-1){
            tree[i]+=tree[2*i+1]+tree[2*i+2];
        }
    }
    printf("%d\n",tree[0]);
    while(q--){
        scanf("%d %d",&a,&b);
        if(tree[a]<tree[b]){
            printf("%d<%d\n",a,b);
        }else if(tree[a]>tree[b]){
            printf("%d>%d\n",a,b);
        }else{
            printf("%d=%d\n",a,b);
        }
    }
    return 0;
}

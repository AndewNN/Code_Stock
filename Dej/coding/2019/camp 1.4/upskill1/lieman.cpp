#include<bits/stdc++.h>
using namespace std;
int a[50],b[50];
int main()
{
    int mi=1e9,n,m,i,j,c;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&c);
            if(c == 1){
                a[j]++;
            }else if(c == -1){
                b[j]++;
            }
        }
    }
    for(j=0;j<m;j++){
        if(a[j] == 0 || b[j] == 0 || a[j]==b[j]){
            continue;
        }
        c = min(a[j],b[j]);
        mi = min(c,mi);
    }
    if(mi == 1e9){
        mi = 0;
    }
    printf("%d",mi);
    return 0;
}

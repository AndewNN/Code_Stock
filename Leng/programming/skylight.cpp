#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,m,l,k,c,a,ans=0,cou=0;
    scanf("%d %d %d %d %d",&n,&m,&l,&k,&c);
    ans=l*k;
    for(i=0;i<n*m;i++){
        scanf("%d",&a);
        cou+=a;
    }
    ans+=cou/c + (cou%c != 0);
    printf("%d",ans);

}


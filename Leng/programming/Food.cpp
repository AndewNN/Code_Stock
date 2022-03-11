#include<bits/stdc++.h>
using namespace std;
int m[10],mm[10],a[10],n;
void play(int st){
    if(st==n){
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++){
        if(m[i]==1 || (st==0 && mm[i]==1))
            continue;
        m[i]=1;
        a[st]=i;
        play(st+1);
        m[i]=0;
    }
    return;
}
int main(){
    int k,i,o;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++){
        scanf("%d",&o);
        mm[o]=1;
    }
    play(0);
}
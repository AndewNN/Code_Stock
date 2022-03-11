#include<bits/stdc++.h>
using namespace std;
int n,nn,m[20],ans[20],cou;
void play(int st,int l){
    if(st == nn){
        for(int i=0;i<nn;i++)
            printf("%d ",ans[i]);
        printf("\n");
        cou++;
        return;
    }
    for(int i=l+1;i<=n;i++){
        if(m[i]==0){
            ans[st]=i;
            m[i]=1;
            play(st+1,i);
            m[i]=0;
        }
    }
    return;
}
int main(){
    scanf("%d %d",&n,&nn);
    play(0,0);
    printf("%d",cou);
}

/*

1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1

*/

#include<bits/stdc++.h>
using namespace std;
int n,ans[25],mk[25],pos[25][3];
void play(int state){
    if(state == n){
        for(int i=0;i<n;i++)
            printf("%d ",ans[i]);
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++){
        if(mk[i])
            continue;
        mk[i] = 1;
        ans[state] = i;
        play(state+1);
        mk[i] = 0;
    }
    return;
}
int main(){
    scanf("%d",&n);
    play(0);
}
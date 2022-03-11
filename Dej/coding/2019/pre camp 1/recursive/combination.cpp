/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int n,r,k,cnt,a[20],b[20];
void play(int state,int sr){
    if(state == r){
        cnt++;
        if(cnt==k){
            for(int i=0;i<r;i++){
                printf("%d ",b[i]);
            }
            exit(0);
        }
        return ;
    }
    for(int i=sr+1;i<=n;i++){
        if(!a[i]){
            a[i]=1;
            b[state] = i;
            play(state+1,i);
            a[i]=0;
        }
    }
}
int main()
{
    scanf("%d %d %d",&n,&r,&k);
    play(0,0);
    return 0;
}

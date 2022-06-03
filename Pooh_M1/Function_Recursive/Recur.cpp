#include<bits/stdc++.h>
using namespace std;
int n,x,y,ans[20];
void play(int state, int a, int b){
    if(a == n || b == n){
        for(int i=0;i<a+b-x-y;i++)
            printf(ans[i]? "W":"L");
        printf("\n");
        return;
    }
    ans[state] = 1;
    play(state+1,a+1,b);
    ans[state] = 0;
    play(state+1,a,b+1);
    return;   
}
int main(){
    scanf("%d %d %d",&n,&x,&y);
    play(0,x,y);
}
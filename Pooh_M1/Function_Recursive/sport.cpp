#include<bits/stdc++.h>
using namespace std;
int n,a[20];
void play(int state){
    if(state == n){
        for(int i=0;i<n;i++)
            printf(a[i]? "W":"L");
        printf("\n");
        return;
    }
    a[state] = 0;
    play(state+1);
    a[state] = 1;
    play(state+1);
    return;
    
}
int main(){
    scanf("%d",&n);
    play(0);
}
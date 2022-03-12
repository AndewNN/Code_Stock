/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int k,cnt;
char c[220];
void play(int a,int b,int state){
    if(a== k || b==k){
        for(int i=0;i<state;i++){
            printf("%c ",c[i]);
        }
        printf("\n");
        return ;
    }
    c[state] = 'W';
    play(a+1,b,state+1);
    c[state] = 'L';
    play(a,b+1,state+1);
}
int main()
{
    int i,j;
    scanf("%d %d %d",&k,&i,&j);
    play(i,j,0);
    return 0;
}

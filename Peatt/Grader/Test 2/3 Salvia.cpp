/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[110],n,cou;
char c[110];
void permu(int i,int state,int bi){
    if(state>n)
        return;
    if(bi==(1<<26)-1){
        cou+=1<<(n-i);
        return;
    }
    for(int j=i+1;j<=n;j++)
        permu(j,state+1,bi|a[j]);
}
int main()
{
    int q,i,j,l,ch,ch2,bi;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf(" %s",c);
            bi=0;
            for(j=0;j<strlen(c);j++){
                bi=bi|(1<<(c[j]-'a'));
            }
            a[i]=bi;
        }
        cou=0;
        permu(0,0,0);
        printf("%d\n",cou);
    }
    return 0;
}
/*

2
9
the
quick
brown
fox
jumps
over
a
lazy
dog
3
abcdefghijklmnopqrstuvwx
abcdefghijklmnopqrstuvwxy
abcdefghijklmnopqrstuvwxyz

*/

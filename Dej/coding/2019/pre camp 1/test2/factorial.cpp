/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int an[10][10000];
char ans[10000];
int main()
{
    int n,cou=0,i,len,j,k,t;
    scanf("%d",&n);
    an[1][0]=1;
    an[1][1]=1;
    ans[0]='1';
    len=1;
    for(i=2;i<=n;i++){
        for(k=0;k<len;k++){
            t = i*(ans[k]-'0');
            t += cou;
            ans[k] = (t%10)+'0';
            an[t%10][i]++;
            cou = t/10;
        }
        while(cou > 0){
            ans[len] = (cou%10)+'0';
            an[cou%10][i]++;
            cou/=10;
            len+=1;
        }
    }
    for(i=len-1;i>=0;i--){
        printf("%c",ans[i]);
    }
    printf("\n");
    for(i=0;i<=9;i++){
        printf("%d : %d\n",i,an[i][n]);
    }
    return 0;
}

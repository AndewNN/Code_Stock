/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
#include <ctype.h>
char a[30][30],s[100];
int di[8]={1,0,-1,0,1,1,-1,-1},dj[8]={0,1,0,-1,1,-1,1,-1},ch,r,c,len;
void p(int i,int j,int lv,int state){
    if(state == len-1){
        ch = 1;
    }
    int ii,jj;
    ii = i+di[lv];
    jj = j+dj[lv];
    if(ii<1 || jj < 1 || ii > r || jj >c){
        return ;
    }
    if(a[ii][jj]!=s[state+1]){
        return ;
    }
    p(ii,jj,lv,state+1);
}
int main()
{
    int i,j,q,k,ai=0,aj=0;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = tolower(a[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--){
        ch = 0;
        scanf(" %s",s);
        len = strlen(s);
        for(i=0;i<len;i++){
            s[i] = tolower(s[i]);
        }
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                if(a[i][j]==s[0]){
                    for(k=0;k<8 && !ch;k++){
                        p(i,j,k,0);
                        if(ch){
                            ai = i;
                            aj = j;
                        }
                    }
                }
            }
        }
        printf("%d %d\n",ai-1,aj-1);
    }
    return 0;
}

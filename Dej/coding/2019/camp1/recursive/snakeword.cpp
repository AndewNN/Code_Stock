/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
#include <ctype.h>
#include<string.h>
char a[30][30],b[200];
int r,c,di[4]={1,0,-1,0},dj[4]={0,1,0,-1},an[1000][2],len,ch,mark[30][30];
void p(int i,int j,int state){
    an[state][0] = i,an[state][1]=j;
    if(state == len-1 && ch){
        ch = 0;
        for(int v=0;v<len;v++){
                printf("%d %d\n",an[v][0],an[v][1]);
        }
        return;
    }
    int k,ii,jj;
    for(k=0;k<4;k++){
        ii = i+di[k],jj=j+dj[k];
        if(ii < 1 || j < 1 || ii > r || jj > c){
            continue;
        }
        if(mark[ii][jj]){
            continue;
        }
        if(a[ii][jj]==b[state+1]){
            mark[ii][jj] = 1;
            p(ii,jj,state+1);
            mark[ii][jj] = 0;
        }

    }
}
int main()
{
    int i,j,q;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = tolower(a[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--){
        ch = 1;
        scanf(" %s",b);
        len = strlen(b);
        for(i=0;i<len;i++){
            b[i]= tolower(b[i]);
        }
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                if(a[i][j]==b[0] && ch){
                    mark[i][j]= 1;
                    p(i,j,0);
                    mark[i][j]= 0;
                }
            }
        }
        if(ch){
            printf("No Matching Word\n");
        }
    }
    return 0;
}

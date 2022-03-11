/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[30][30],b[110];
int mark[30][30],path[100][2],di[4]={1,0,-1,0},dj[4]={0,1,0,-1};
int q,r,c,i,j,len,v,ch=1;
void play(int e,int d,int l){
    int ii,jj,k;
    if(l==len && ch){
        for(v=0;v<len;v++){
            printf("%d %d\n",path[v][0],path[v][1]);
        }
        ch=0;
    }
    for(k=0;k<4;k++){
        ii = e+di[k],jj = d+dj[k];
        if(ii<1 || jj < 1 || ii > r || jj > c){
            continue;
        }
        if(mark[ii][jj]){
            continue;
        }
        if(a[ii][jj]==tolower(b[l])){

            mark[ii][jj] = 1;
            path[l][0] = ii;
            path[l][1] = jj;
            play(ii,jj,l+1);
            mark[ii][jj] = 0;
        }
    }
}
int main()
{
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = tolower(a[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--){
        ch=1;
        scanf(" %s",b);
        len = strlen(b);
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                if(a[i][j]==tolower(b[0])){
                    mark[i][j]=1;
                    path[0][0] = i;
                    path[0][1] = j;
                    play(i,j,1);
                    mark[i][j]=0;
                }
            }
        }
        if(ch){
            printf("No Matching Word\n");
        }
    }
    return 0;
}
/*
3 5
TAEPE
TULAR
STOPW
2
PEATT
HELLOWORLD
*/

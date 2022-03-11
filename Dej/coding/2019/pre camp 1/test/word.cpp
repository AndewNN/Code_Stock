/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[30][30],b[30],di[8]={1,0,-1,0,1,1,-1,-1},dj[8]={0,1,0,-1,1,-1,1,-1};
int i,j,r,c,n,len,k,ch,ch1;
void p(int x,int y,int k,int l){
    if(l == len){
        ch = 1;
    }
    int ii,jj;
    ii = x +di[k],jj = y+ dj[k];
    if(ii >= 1 && ii <=r && jj >= 1 && jj <= c && a[ii][jj] == tolower(b[l])){
        p(ii,jj,k,l+1);
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
    scanf("%d",&n);
    while(n--){
        ch = 0;
        ch1 = 1;
        scanf(" %s",b);
        len = strlen(b);
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                if(a[i][j] == tolower(b[0])){
                    for(k=0;k<8;k++){
                        p(i,j,k,1);
                        if(ch && ch1){
                            printf("%d %d\n",i-1,j-1);
                            ch1 = 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

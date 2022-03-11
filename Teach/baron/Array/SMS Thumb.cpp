#include<bits/stdc++.h>
using namespace std;
char st[10][10],a[110];
int di[3][3]={1,2,3,4,5,6,7,8,9},md[10];
int main(){
    int n,m,i,j,ii,jj,len=0,x,y,q;
    for(i=2,m=0;i<=9;i++){
        n=3;
        if(i==7||i==9)
            n=4;
        md[i]=n;
        for(j=0;j<n;j++,m++){
            st[i][j]=m+'A';
        }
    }
    scanf("%d %d %d",&q,&x,&y);
    ii=(x-1)/3;
    jj=(x-1)%3;
    a[len++]=st[x][(y-1)%md[x]];
    q--;
    while(q--){
        scanf("%d %d %d",&x,&y,&n);
        ii+=y,jj+=x;
        if(di[ii][jj]!=1)
            a[len++]=st[di[ii][jj]][(n-1)%md[di[ii][jj]]];
        else{
            len-=n;
            if(len<0)
                len=0;
        }
    }
    if(len<=0)
        printf("null");
    else
        for(i=0;i<len;i++)
            printf("%c",a[i]);
    return 0;
}
/*

4
5 3
1 0 3
-1 1 3
1 -2 2

*/

/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[21][21];
int b[21],c[21];
int main()
{
    int n,m,i,j,d,e,st,f;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        c[i]=30;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='O'){
                if(i<c[j]){
                    c[j] = i;
                }
            }
        }
    }
    for(d=0;d<m;d++){
        scanf("%d",&e);
        if(e==0) continue;
        if(c[d]==30) st=n-1;
        else st=c[d]-1;
        while(st>=0 && e>0){
            a[st][d] = '#';
            e--;
            st--;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

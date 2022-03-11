#include<bits/stdc++.h>
using namespace std;
char a[25][25],b[25];
int mi[25];
int main(){
    int i,j,k,n,m,aa,ii;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
        mi[i]=n;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='O')
                mi[j]=min(mi[j],i);
    }
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(j=0;j<m;j++){
        while(b[j]--){
            if(mi[j]>0)
                a[--mi[j]][j]='#';
            }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
}

/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int ma[35][35],n,mx=-1,di[4]={-1,0,1,0},dj[4]={0,1,0,-1};
char a[35][35];
void play(int i,int j,int st,int o){
    mx = max(mx,st);
    for(int k=0;k<4;k++){
        int ii=i+di[k],jj=j+dj[k];
        if(ii>=0&&ii<n&&jj>=0&&jj<n&&a[i][j]!=a[ii][jj]&&!ma[ii][jj]){
            ma[ii][jj]=1;
            play(ii,jj,st+1,(0+1)%2);
            ma[ii][jj]=0;
        }
    }

    return;

}
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf(" %s",a[i]);
    if(a[0][0] == '.'){
        ma[0][0]=1;
        play(0,0,1,1);
        ma[0][0]=0;
    }
    else{
        ma[0][0]=1;
        play(0,0,1,0);
        ma[0][0]=0;
    }
    printf("%d\n",mx);
}
/*

for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
*/

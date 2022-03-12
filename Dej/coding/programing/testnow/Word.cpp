/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[30][30],b[20];
int di[8]={1,1,0,-1,-1,-1,0,1},dj[8]={0,1,1,1,0,-1,-1,-1},cou,len,n,m;
bool ch,ch2;
void play(int i,int j,int lv){
    if(cou == len-1){
        ch = true;
        return ;
    }
    if(i+di[lv]<0 || i+di[lv]>=n || j + dj[lv] <0 || j + dj[lv] >=m ){
        return ;
    }
    if(a[i+di[lv]][j+dj[lv]] == tolower(b[cou+1])){
        cou++;
        play(i+di[lv],j+dj[lv],lv);
    }
}
int main()
{
    int i,j,q,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = tolower(a[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf(" %s",b);
        len = strlen(b);
        cou = 0;
        ch = false;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i][j]==tolower(b[0])){
                    for(k=0;k<8 && ch == false;k++){
                        play(i,j,k);
                        cou = 0;
                        if(ch){
                            printf("%d %d\n",i,j);
                        }
                    }
                }
            }
        }
    }
}

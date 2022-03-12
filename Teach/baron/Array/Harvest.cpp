#include<bits/stdc++.h>
using namespace std;
int n=9,a[11][11],ma,ans,mx=-1e9,di[8]={1,1,0,-1,-1,-1,0,1},dj[8]={0,1,1,1,0,-1,-1,-1};
int play(int x,int y){
    int sum=0,i,ii,jj;
    for(i=0;i<8;i++){
        ii=x+di[i];
        jj=y+dj[i];
        if(a[ii][jj]==0){
            sum++;
            a[ii][jj]=1;
        }
        else if(a[ii][jj]==1){
            sum--;
            a[ii][jj]=0;
        }
    }
    return sum;
}
int main(){
    int i1,j1,i2,j2,i3,j3,i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
                ans++;
        }
    for(i1=1;i1<n-1;i1++)
        for(j1=1;j1<n-1;j1++)
            for(i2=1;i2<n-1;i2++)
                for(j2=1;j2<n-1;j2++)
                    for(i3=1;i3<n-1;i3++)
                        for(j3=1;j3<n-1;j3++){
                            if((i1==i2&&j1==j2)||(i1==i3&&j1==j3)||(i3==i2&&j3==j2))
                                continue;
                            mx=max(mx,play(i1,j1)+play(i2,j2)+play(i3,j3));
                            play(i1,j1)+play(i2,j2)+play(i3,j3);
                        }

    printf("%d",ans+mx);
}
/*

0 0 0 1 1 0 0 1 1
0 1 0 1 1 0 1 1 1
0 0 0 1 1 0 1 1 1
1 1 1 1 1 1 1 1 1
1 1 0 0 0 1 1 1 1
1 1 0 1 0 1 0 1 1
1 1 0 0 0 1 1 1 1
1 1 1 1 1 1 1 0 0
1 1 1 1 1 1 1 0 1

1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1

*/

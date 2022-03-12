#include<bits/stdc++.h>
using namespace std;
int main(){
    int h1,h2,b1,b2,x,y,i,j,k,l,ma=-10;
    scanf("%d %d %d %d %d %d",&h1,&h2,&b1,&b2,&x,&y);
    for(i=0;i<=x;i++)                //h1 b1
        for(j=0;j<=x-i;j++)          //h2 b2
            for(k=0;k<=y;k++)        //h1 b2
                for(l=0;l<=y-k;l++){ //h2 b1
                    if(h1<(i+k)||h2<(j+l)||b1<(i+l)||b2<(j+k))
                        continue;
                    ma=max(ma,i+j+k+l);
                }
    printf("%d",ma);
    return 0;
}
/*

3 4 2 6
6 1

*/

/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int fendwick[2100][2100];
int query(int x,int y){
    int i,j,sum=0;
    for(i=x;i>0;i-=(i&-i))
        for(j=y;j>0;j-=(j&-j))
            sum+=fendwick[i][j];
    return sum;
}
int main()
{
    int opr,n,i,j,sum,x,y,c,x1,x2,y1,y2;
    while(1){
        scanf("%d",&opr);
        if(opr==3) break;
        if(opr==0){
            scanf("%d",&n); n++; continue;
        }
        if(opr==1){
            scanf("%d %d %d",&x,&y,&c);
            for(i=x+1;i<=n;i+=(i&-i))
                for(j=y+1;j<=n;j+=(j&-j))
                    fendwick[i][j]+=c;
        }
        if(opr==2){
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            printf("%d\n",query(x2+1,y2+1)-query(x2+1,y1)-query(x1,y2+1)+query(x1,y1));
        }
    }
    return 0;
}

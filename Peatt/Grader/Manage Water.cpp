/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int fw[2100][2100];
int main()
{
    int i,j,n,x,y,c,x1,y1,x2,y2,o,sum,cou=0;
    scanf("%d %d",&n,&n);
    while(1){
        scanf("%d",&o);
        if(o==1){
            scanf("%d %d %d",&x,&y,&c);
            x++,y++;
            for(i=x;i<=n;i+=i&(-i))
                for(j=y;j<=n;j+=j&(-j))
                    fw[i][j]+=c;
        }
        if(o==2){
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            x1++,y1++,x2++,y2++;
            sum=0;
            for(i=x2;i>0;i-=i&(-i))
                for(j=y2;j>0;j-=j&(-j))
                    sum+=fw[i][j];
            for(i=x1-1;i>0;i-=i&(-i))
                for(j=y2;j>0;j-=j&(-j))
                    sum-=fw[i][j];
            for(i=x2;i>0;i-=i&(-i))
                for(j=y1-1;j>0;j-=j&(-j))
                    sum-=fw[i][j];
            for(i=x1-1;i>0;i-=i&(-i))
                for(j=y1-1;j>0;j-=j&(-j))
                    sum+=fw[i][j];
            printf("%d\n",sum);
        }
        if(o==3)
            return 0;
        cou++;
        if(cou==100000)
            return 0;
    }

    return 0;
}
/*

0 4
1 1 2 3
2 0 0 2 2
1 1 1 2
1 1 2 -1
2 1 1 2 3

*/


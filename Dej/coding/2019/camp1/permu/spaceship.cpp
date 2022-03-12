/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
int di[30][3],co[30][3],n,q,mi=1e9,mk[30];
void p(int x,int y,int z,int p1,int p2,int p3,int sum){
    int i,j;
    if(p1 >= n && p2 >= n && p3 >= n){
        if(sum < mi){
            mi = sum;
        }
        return ;
    }
    for(i = 0 ;i<q;i++){
        if(!mk[i]){
            mk[i]=1;
            j = (x-di[i][0])*(x-di[i][0])+(y-di[i][1])*(y-di[i][1])+(z-di[i][2])*(z-di[i][2]);
            p(di[i][0],di[i][1],di[i][2],p1+co[i][0],p2+co[i][1],p3+co[i][2],sum + j);
            mk[i]=0;
        }
    }
}
int main()
{
    int i,x,y,z;
    scanf("%d %d %d %d %d",&n,&x,&y,&z,&q);
    for(i=0;i<q;i++){
        scanf("%d %d %d %d %d %d",&di[i][0],&di[i][1],&di[i][2],&co[i][0],&co[i][1],&co[i][2]);
    }
    p(x,y,z,0,0,0,0);
    printf("%d\n",mi);
    return 0;
}

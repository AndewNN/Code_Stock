/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int j=0,i=0,x,y,A[30][30],mt=-6,cx,cy,di[4]={1,-1,0,0},dj[4]={0,0,1,-1},a;
void play(int o,int p){
if(A[o][p]>mt){
    mt = A[o][p];
}
for(int k=0;k<4;k++){
    if((o+di[k]>=0 && o+di[k]<a) && (p+dj[k]>=0 && p+dj[k]<a) && (A[o+di[k]][p+dj[k]]!=100) && (A[o+di[k]][p+dj[k]]>A[o][p])){
        play(o+di[k],p+dj[k]);
    }
}
}
int main()
{
scanf("%d",&a);
scanf("%d %d",&x,&y);
for(i=0;i<a;i++){
    for(j=0;j<a;j++){
    scanf("%d",&A[i][j]);
}
}
play(y-1,x-1);
printf("%d",mt);
    return 0;
}
/*
4
2 1
100 1 3 8
0 2 1 4
2 3 5 100
0 8 8 100 */

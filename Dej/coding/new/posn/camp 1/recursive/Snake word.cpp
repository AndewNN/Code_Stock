/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char A[30][30],B[120];
int Mark[30][30],a,b,c,state,X[120],Y[120],len,di[4]={1,-1,0,0},dj[4]={0,0,1,-1},ch=1,x,y;
void play(int y,int x,int state){
    X[state] = x;
    Y[state] = y;
if(state == len-1){
        ch = 0;
    for(int g=0;g<len;g++){
        printf("%d %d\n",Y[g]+1,X[g]+1);
    }

return;
}
for(int k=0;k<4;k++){
    if((y+di[k]>=0 && y+di[k]<a) && (x+dj[k]>=0 && x+dj[k]<b) && Mark[y+di[k]][x+dj[k]]!=1 && state<len && A[y+di[k]][x+dj[k]]==B[state+1]){
                Mark[y][x] = 1;
        play(y+di[k],x+dj[k],state+1);
                Mark[y][x] = 0;
    }
}

}
int main()
{
scanf("%d %d",&a,&b);
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        scanf(" %c",&A[i][j]);
        A[i][j] = tolower(A[i][j]);
    }
}
scanf("%d",&c);
for(int z=0;z<c;z++){
    ch = 1;
    scanf(" %s",B);
    state = 0;
    len = strlen(B);
for(int v=0;v<len;v++){
    B[v] = tolower(B[v]);
}
    for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
 if(A[i][j]==B[0]){
        Mark[i][j] = 1;
    play(i,j,0);
         Mark[i][j] = 0;
 }
    }
}
if(ch){
    printf("No Matching Word");
}
}
    return 0;
}
/*
3 5
TAEPE
TULAR
STOPW
2
PEATT
HELLOWORLD
*/

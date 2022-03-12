/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
char N[2100][1000],O[2100][1000];
int n,i,j,c,d;
void play(int a){
i = 2*pow(2,a-1);
j = pow(2,a-1);
if(a==1){
    O[0][0] = '*';
}
for(c=0;c<i/2;c++){
    for(d=j/2+1;d<j;d++){
        N[c][d] = '-';
    }
}
for(c=i/2+1;c<i;c++){
    for(d=0;d<j/2;d++){
        N[c][d] = '-';
    }
}
for(d=0;d<j;d++){
        N[i-1][d] = '*';
    }
    for(c=0;c<i/2;c++){
        for(d=0;d<j/2;d++){
                N[c+i/2][d+j/2] = O[c][d];
        }
    }
    for(c=0;c<i;c++){
        for(d=0;d<j;d++){
        O[c][d] = N[c][d];
        }
    }
    if(a==n){
    for(c=0;c<i;c++){
        for(d=0;d<j;d++){
            printf("%c",N[i][j]);
        }
        printf("\n");
    }
    exit(0);
}
    play(a+1);
}
int main()
{
scanf("%d",&n);
play(1);
    return 0;
}

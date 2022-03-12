/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int d,a[20],b[20];
void pri(){
    int k;
    for(k=0;k<d;k++){
        printf("%d",a[k]);
    }
    printf(" ");
    for(k=0;k<d;k++){
        printf("%d",b[k]);
    }
    printf("\n");
}
void play(int state){
    int i,j;
    if(state==d){
        for(i=d-1;i>=0;i--){
            if(a[i]==0){
                b[i]=1;
                pri();
                b[i]=0;
            }
        }
        return ;
    }
    a[state] = 0;
    b[state] = 0;
    play(state+1);
    a[state] = 1;
    b[state] = 1;
    play(state+1);
}
int main()
{
    scanf("%d",&d);
    play(0);
    return 0;
}

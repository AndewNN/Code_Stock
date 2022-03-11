#include<bits/stdc++.h>
using namespace std;
char a[10][1000],s[20];
int main(){
    int i,j,len;
    scanf(" %s",s);
    len=strlen(s);
    memset(a,'.',sizeof a);
    for(i=2,j=0,a[2][0]='#';j<len;j++,i+=4){
        if(j%3!=2)  a[0][i]=a[4][i]='#';
        else        a[0][i]=a[4][i]='*';
        if(j%3!=2)  a[1][i-1]=a[1][i+1]=a[3][i-1]=a[3][i+1]='#';
        else        a[1][i-1]=a[1][i+1]=a[3][i-1]=a[3][i+1]='*';
        a[2][i+2]='#';
        if(j%3==2)
            a[2][i-2]=a[2][i+2]='*';
        a[2][i]=s[j];
    }
    for(i=0;i<5;i++){
        for(j=0;j<4*len+1;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }


}
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

5
4 5
3 4 5
2 3 4 5
1 2 3 4 5



/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[3][3]={1,2,3,4,5,6,7,8,9};
char st[100],b[10][5];
int main()
{
    int i,j,n,s,m,len=0,di,dj;
    j = 0;
    for(i=2;i<=9;i++){
        if(i == 7 || i==9){
            n = 4;
        }else{
            n = 3;
        }
        for(s = 0;s<n;s++){
            b[i][s] = 'A'+j;
            j++;
        }
    }
    scanf("%d %d %d",&n,&s,&m);
    i = (s-1)/3,j=(s-1)%3;
    if(a[i][j]==7 || a[i][j] == 9){
        st[len] = b[a[i][j]][(m-1)%4];
        len++;
    }else if(a[i][j] != 1){
        st[len] = b[a[i][j]][(m-1)%3];
        len++;
    }
    n--;
    while(n--){
        scanf("%d %d %d",&dj,&di,&m);
        i+=di,j+=dj;
        if(a[i][j]==7 || a[i][j] == 9){
        st[len] = b[a[i][j]][(m-1)%4];
        len++;
        }else if(a[i][j] != 1){
        st[len] = b[a[i][j]][(m-1)%3];
        len++;
        }else if(a[i][j]==1 && len >0){
            len-=m;
        }
    }
    if(len>0){
    for(i=0;i<len;i++){
        printf("%c",st[i]);
    }
    }else{
    printf("null");
    }
    return 0;
}

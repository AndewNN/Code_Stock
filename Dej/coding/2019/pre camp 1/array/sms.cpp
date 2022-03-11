/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[3][3]={1,2,3,4,5,6,7,8,9};
char b[10][5],ans[100];
int main()
{
    int n,s,m,i,j,len=0,k;
    n=0;
    for(i=2;i<=9;i++){
        if(i== 7 || i== 9){
            s = 4;
        }else{
            s = 3;
        }
        for(j=0;j<s;j++){
            b[i][j] = 'A'+n;
            n+=1;
        }
    }
    scanf("%d %d %d",&n,&s,&m);
    i = (s-1)/3,j=(s-1)%3;
    if(a[i][j]== 7 || a[i][j]==9){
        ans[len] = b[a[i][j]][(m-1)%4];
        len++;
    }else if(a[i][j]!=1){
        ans[len] = b[a[i][j]][(m-1)%3];
        len++;
    }
    n--;
    while(n--){
        scanf("%d %d %d",&s,&k,&m);
        i+=k,j+=s;
        if(a[i][j]== 7 || a[i][j]==9){
        ans[len] = b[a[i][j]][(m-1)%4];
        len++;
        }else if(a[i][j]!=1){
        ans[len] = b[a[i][j]][(m-1)%3];
        len++;
        }else{
        len-=m;
        len = max(0,len);
        }
    }
    if(len>0){
    for(i=0;i<len;i++){
        printf("%c",ans[i]);
    }
    }else{
        printf("null");
    }
    return 0;
}

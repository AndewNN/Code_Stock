/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
char st[100],stt[10][10];
int di[3][3]={1,2,3,4,5,6,7,8,9};
int main()
{
    int n,a,b,x,y,m,len=0,i,j,si,sj;
    a = 0;
    for(i=2;i<=9;i++){
        if(i == 7 || i== 9){
            n = 4;
        }else{
            n = 3;
        }
        for(j=0;j<n;j++){
            stt[i][j] = a+'A';
            a+=1;
        }
    }
    scanf("%d %d %d",&n,&a,&b);
    si = (a-1)/3;
    sj = (a-1)%3;
    if(a == 7 || a==9){
        st[len] = stt[a][(b-1)%4];
        len++;
    }else if(a!=1){
        st[len] = stt[a][(b-1)%3];
        len++;
    }
    n--;
    while(n--){
        scanf("%d %d %d",&x,&y,&m);
        si+=y;
        sj+=x;
        if(di[si][sj] == 7 || di[si][sj]==9){
        st[len] = stt[di[si][sj]][(m-1)%4];
        len++;
        }else if(di[si][sj]!=1){
        st[len] = stt[di[si][sj]][(m-1)%3];
        len++;
        }else{
            len-=m;
            if(len < 0){
                len = 0;
            }
        }
    }
    if(len <= 0){
        printf("null");
    }else{
        for(i=0;i<len;i++){
            printf("%c",st[i]);
        }
    }
    return 0;
}

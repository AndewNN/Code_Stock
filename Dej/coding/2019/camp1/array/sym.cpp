/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<stdio.h>
using namespace std;
int a[1010],b[1010];
int main()
{
    int t,i,n,cou,ma,ch,st;
    scanf("%d",&t);
    while(t--){
        ch = 1;
        ma = -1;
        scanf("%d",&n);
        cou=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==0 && i != 0){
                b[i]+=1+b[i-1];
            }
            if(a[i]==0 && i==0){
                b[i] = 1;
            }
        }
        for(i =0;i<n;i++){
            if(b[i]>ma && b[i+1]==0 && b[i]%2==1){
                ma = b[i];
                st = i;
                ch = 0;
            }
        }
        if(ch == 0){
        printf("%d\n",st-ma/2);
        }else{
        printf("-1\n");
        }
        for(i=0;i<n;i++){
            b[i]=0;
        }
    }
    return 0;
}
/*
4
12
1 0 0 0 1 0 0 0 0 0 1 1
12
0 0 0 1 0 0 0 1 0 0 0 0
12
1 1 1 0 1 1 1 0 1 1 1 1
12
0 0 1 1 0 0 1 1 0 0 0 0
*/

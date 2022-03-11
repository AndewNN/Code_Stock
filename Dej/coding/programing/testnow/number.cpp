/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[500100];
int st=1,ch = 1,n;
int p(int x){
}
int main()
{
    int m,i,x,y,t,zz;
    char opr;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(zz=0;zz<m;zz++){
        scanf(" %c",&opr);
        if(opr == 'q'){
            scanf("%d",&x);
      //      printf("%d\n",a[p(x)]);
    //    for(i=1;i<=n;i++){
    //          printf("%d ",a[p(i)]);
    //     }
        printf("\n");
        }else if(opr == 'c'){
            scanf("%d",&x);
            if(ch == 1 && st <=x){
                ch = 0;
                t = st-1;
                st = x-t;
            }else if(ch == 1 && st >x){
                ch = 0;
                t = st-x;
                st = n-t+1;
            }else if(ch == 0 && st <=x){
                ch = 1;
                t = st-1;
                st = x-t;
            }else if(ch == 0 && st >x){
                ch = 1;
                t = st-x;
                st = n-t+1;
            }
            printf("start %d\n",st);
        }else if(opr == 'a'){
            scanf("%d %d",&x,&y);
            swap(a[p(x)],a[p(y)]);
        }else if(opr == 'b'){
            scanf("%d %d",&x,&y);
            a[p(x)] = y;
        }
    }
    return 0;
}
/*
5 1234
1 2 3 4 5
*/

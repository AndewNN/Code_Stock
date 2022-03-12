#include<bits/stdc++.h>
using namespace std;
int a[500100];
int main()
{
    int n,m,i,x,y,st,dir,dt,bu;
    char opr;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    st = 0;
    dir = 1;
    while(m--){
        scanf(" %c",&opr);
        if(opr == 'a'){
            scanf("%d %d",&x,&y);
            if(dir == 1){
                swap(a[(st+x-1)%n],a[(st+y-1)%n]);
            }else{
                swap(a[(st-x+1+n)%n],a[(st-y+1+n)%n]);
            }
        }else if(opr == 'b'){
            scanf("%d %d",&x,&y);
            if(dir == 1){
                a[(st+x-1)%n] = y;
            }else{
                a[(st-x+1+n)%n] = y;
            }
        }else if(opr == 'c'){
            scanf("%d",&x);
        //    printf("st dir :%d %d\n",st,dir);
        }else if(opr == 'q'){
            scanf("%d",&x);
            if(dir == 1){
                printf("%d\n",a[(st+x-1)%n]);
            }else{
                printf("%d\n",a[(st-x+1+n)%n]);
            }
        }
   /*     for(x=1;x<=n;x++){
            if(dir == 1){
                printf("%d ",a[(st+x-1+n)%n]);
            }else{
                printf("%d ",a[(st-x+1+n)%n]);
            }
        }
        printf("\n"); */
    }
    return 0;
}

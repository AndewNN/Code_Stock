#include<bits/stdc++.h>
using namespace std;
int a[2010][2010];
int main()
{
    int n,t,x,y,c,i,j,x1,y1,ans;
    scanf("%d %d",&t,&n);
    n++;
    while(1){
        scanf("%d",&t);
        if(t==1){
            scanf("%d %d %d",&x,&y,&c);
            for(i=x+1;i<=n;i+=(i&-i)){
                for(j=y+1;j<=n;j+=(j&-j)){
                    a[i][j]+=c;
                }
            }
        }else if(t==2){
            scanf("%d %d %d %d",&x,&y,&x1,&y1);
            ans = 0;
            for(i=x1+1;i>=1;i-=(i&-i)){
                for(j=y1+1;j>=1;j-=(j&-j)){
                    ans +=a[i][j];
                }
            }
            for(i=x1+1;i>=1;i-=(i&-i)){
                for(j=y;j>=1;j-=(j&-j)){
                    ans -=a[i][j];
                }
            }
            for(i=x;i>=1;i-=(i&-i)){
                for(j=y1+1;j>=1;j-=(j&-j)){
                    ans -=a[i][j];
                }
            }
            for(i=x;i>=1;i-=(i&-i)){
                for(j=y;j>=1;j-=(j&-j)){
                    ans +=a[i][j];
                }
            }
            printf("%d\n",ans);
        }else{
            break;
        }
    }
    return 0;
}

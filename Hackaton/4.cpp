/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int h[110],w[110],hh[110],ww[110];
char a[110][101000],t[5][7]={' ',' ',' ','|',' ',' ',' ',
                            '-','o','x','o','x','o','-',
                            ' ','-','o','x','o','-',' ',
                            ' ',' ','-','o','-',' ',' ',
                            ' ',' ',' ','-',' ',' ',' '},o[100000];
int main()
{
    int n,i,sum=0,j,k,ls,x=0,mx=5,mxx=0,ans=0,nl=0,now,ch=1;
    gets(o);
    sscanf(o,"%d",&n);

    gets(o);
    for(i=0,now=0; i<strlen(o); i++)
    {
        if(o[i]!=' ')
        {
            sum*=10,sum+=o[i]-'0';
        }
        else
        {
           // printf("%d\n",sum);
            h[now+1]=sum;
            sum=0,now++;
        }

        if(i==strlen(o)-1)
        {
        //    printf("%d\n",sum);
            h[now+1]=sum;
            sum=0,now++;
        }
    }
    if(now!=n)
        ch=0;
    gets(o);
    for(i=0,now=0; i<strlen(o); i++)
    {
        if(o[i]!=' ')
        {
            sum*=10,sum+=o[i]-'0';
        }
        else
        {
          //  printf("%d\n",sum);
            w[now+1]=sum;
            sum=0,now++;
        }

        if(i==strlen(o)-1)
        {
          //  printf("%d\n",sum);
            w[now+1]=sum;
            sum=0,now++;
        }
    }
    if(now!=n)
        ch=0;
    if(ch==0){
        printf("0");
        return 0;
    }
    for(now=1,i=1;i<=n;i++)
    {
        if(h[i]>0&&w[i]>0)
            hh[now]=h[i],ww[now]=w[i],now++;
    }
    now--;
    for(i=1;i<=now;i++)
        mx=max(mx,hh[i]);
   /* for(i=1;i<=n;i++)
        printf("%d ",h[i]);
    printf("\n");
    for(i=1;i<=n;i++)
        printf("%d ",w[i]);
    printf("\n");*/
    /*for(i=1;i<=n;i++){
        scanf("%d",&h[i]);
        mx=max(mx,h[i]);
    }*/
    /*for(i=1;i<=n;i++){
        scanf("%d",&w[i]);
    }*/
    for(k=1;k<=now;k++){
        for(i=1;i<=hh[k];i++)
            for(j=0;j<ww[k];j++){
               a[i][j+x]='*';
        }
        x+=ww[k]+11;
    }
    x=0;
    for(k=1;k<now;k++){
        x+=ww[k]+3;
        for(i=1;i<=5;i++)
            for(j=0;j<7;j++)
                a[i][j+x-1]=t[i-1][j];
        x+=8;
    }
    for(i=1;i<=now;i++)
        mxx+=ww[i];
    mxx+=(now-1)*11;
    for(i=mx;i>=1;i--){
        for(j=0;j<=mxx-1;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
    for(i=0;i<mxx;i++)
        printf("*");
    for(i=1;i<=now;i++)
        ans+=ww[i]*hh[i];
    ans+=mxx;
    printf("\n%d\n",ans);

    return 0;
}
/*

3
9 8 7
2 2 2

*/

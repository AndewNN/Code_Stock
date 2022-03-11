/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[53][53],in[53],ou[53];
int main()
{
    int k,n,t,i,j,ch;
    char opr;
    freopen("travel_restrictions_input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)           // fight in
        {
            scanf(" %c",&opr);
            if(opr=='Y')
                in[i]=1;
            else
                in[i]=0;
        }
        for(i=1;i<=n;i++)           // fight out
        {
            scanf(" %c",&opr);
            if(opr=='Y')
                ou[i]=1;
            else
                ou[i]=0;
        }
        for(i=0;i<=n;i++)           // set array
            for(j=0;j<=n;j++)
                a[i][j]=0;

        for(i=1;i<=n;i++)           // push array
        {
            for(j=i,ch=1;j<=n;j++)  //right
            {
                if(i==j)
                    a[i][j]=1,ch=ou[j];
                else
                {
                    if(in[j]==1&&ch==1)
                        a[i][j]=1,ch=ou[j];
                    else
                        break;
                }
            }
            for(j=i,ch=1;j>=1;j--)  //left
            {
                if(i==j)
                    a[i][j]=1,ch=ou[j];
                else
                {
                    if(in[j]==1&&ch==1)
                        a[i][j]=1,ch=ou[j];
                    else
                        break;
                }
            }
        }
        printf("Case #%d:\n",k);    // print
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i][j]==1)
                    printf("Y");
                else
                    printf("N");
            }
            printf("\n");
        }
    }


    return 0;
}
/*

8
2
YY
YY
2
NY
YY
2
NN
YY
5
YNNYY
YYYNY
10
NYYYNNYYYY
YYNYYNYYNY
20
YYNYNYNYNNYYYYYYNYNY
NYYYNYNYYNNYNYYNNYYY
50
NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN
NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN
50
YNYYYYNYNYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYNYYYY
YYYYYYYYYYYYYYNYYYYYYYNYYYYYNYYYYNYYNYYYYNNYYYYYYY


*/

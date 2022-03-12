/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char a[10100],b[10100];
int dp[2][10010];
int main()
{
    int i,j,lena,lenb,mx=-1,k;
    scanf(" %s %s",a,b);
    lena=strlen(a);
    lenb=strlen(b);
    for(i=1;i<=lena;i++)
    {
        for(j=1;j<=lenb;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i%2][j]=dp[(i+1)%2][j-1]+1;
                if(dp[i%2][j]>mx)
                {
                    mx=dp[i%2][j];
                    k=j;
                }
            }
            else
                {
                    dp[i%2][j]=0;
                }
        }
    }
    for(i=k-mx;i<k;i++)
        printf("%c",b[i]);


    return 0;
}

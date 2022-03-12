/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
char a[1010],b[1010];
int main()
{
    int i,n,m,j,cnt,ans=0,ch;
    scanf("%d %d %s %s",&n,&m,a,b);
    for(i=0,cnt=0; i<n; i++)
    {
        if(a[i]==b[0])
        {
            for(j=0,ch=1;j<m;j++)
                if(a[i+j]!=b[j])
                    ch=0;
            if(ch==1)
                ans++;
        }
    }
    printf("%d",ans);


    return 0;
}

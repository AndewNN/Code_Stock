/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[3010];
int main()
{
    int n,i,j,maxx,minn,countt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++){
        maxx=minn=a[i];
        for(int j=i;j<=n;j++){
            maxx = max(maxx,a[j]);
            minn = min(minn,a[j]);
            if(j-i+1 == maxx-minn+1)
                countt++;
        }
    }
    printf("%d\n",countt);
    return 0;
}

/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>PII;
priority_queue<PII> he;
int a[500500];
int main()
{
    int i,n,k;
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=1; i<n&&i<=k; i++)
        he.push({-(a[0]+a[i]),i});
    for(i=k+1; i<n; i++)
    {
        while(!he.empty()&&i-he.top().second>k)
            he.pop();
        int tmp= -he.top().first;
        if(i==n-1)
        {
            printf("%d",tmp+a[i]);
            return 0;
        }
        he.push({-(tmp+a[i]),i});
    }
    return 0;
}

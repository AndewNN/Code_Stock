/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100],s[100100];
int fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}
int main()
{
    int n,m,i,a,b,pa,pb;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        p[i]=i;
    for(i=1;i<=n;i++)
        scanf("%d",&s[i]);
    while(m--)
    {
        scanf("%d %d",&a,&b);
        pa=fr(a),pb=fr(b);
        if(pa==pb)
            printf("-1\n");
        else if(s[pa]>s[pb])
        {
            printf("%d\n",pa);
            p[pb]=pa;
            s[pa]+=s[pb]/2;
        }
        else if(s[pa]<s[pb])
        {
            printf("%d\n",pb);
            p[pa]=pb;
            s[pb]+=s[pa]/2;
        }
        else if(pa<pb)
        {
            printf("%d\n",pa);
            p[pb]=pa;
            s[pa]+=s[pb]/2;
        }
        else if(pa>pb)
        {
            printf("%d\n",pb);
            p[pa]=pb;
            s[pb]+=s[pa]/2;
        }
    }


    return 0;
}

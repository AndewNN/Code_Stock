/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
long long a[1010],ans;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        a[j]++;
    }
    for(i=0;i<1000;i++)
        for(j=i;j<1000;j++){
            if(i==j)
                ans+=a[i]*(a[i]-1)/2;
            else if( i%10==j%10 || (i/10)%10==(j/10)%10 || i/100==j/100 )
                ans+=a[i]*a[j];
    }
    printf("%lld\n",ans);

    return 0;
}


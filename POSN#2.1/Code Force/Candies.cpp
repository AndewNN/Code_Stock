/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,m,i,ch;
    scanf("%d",&q);
    while(q--)
    {
        ch=0;
        scanf("%d",&n);
        for(i=4;i-1<=n;i*=2)
        {
            if(n%(i-1)==0)
            {
                printf("%d\n",n/(i-1));
                ch=1;
                break;
            }

        }
    }


    return 0;
}

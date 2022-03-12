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
    int n,i,mi=1e10,now,ma=-1e10;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&now);
        if(mi>now)
            mi=now;
        if(ma<now)
            ma=now;
    }
    printf("%d\n%d",ma,mi);
    return 0;
}
/*

10
1 5 4 6 8 7 9 5 1 3

*/

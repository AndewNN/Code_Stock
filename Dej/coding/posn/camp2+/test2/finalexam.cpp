/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100005],day[100005],mark[100005];
int main()
{

    while(l<r){
        mid = (l+r)/2;
        memset(smark,0,sizeof mark);
        for(coun=0,lef=0,i=mid;i>0;i--){
            if(a[i]!=0&&!mark[a[i]]){
                mark[a[i]]=1;
                lef+=day[a[i]];
                coun++;
            }
            else if(lef>0){
                lef--;
            }
        }
        if(coun==k&&lef==0)
            r = mid;
        else
            l = mid+1;
    }
    if(l!=n+1)
        printf("%d",l);
    else

    return 0;
}

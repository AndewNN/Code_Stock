/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int m[400];
int main()
{
    int n,i,a,b,l,cou=0,st=-1,ma=-1;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        l=a;
        m[b]=1;
        while(l%360 != b)  m[(l++)%360]=1;
    }
    for(i=0;i<360;i++)
        if(m[i] == 0){
            st = i;
            break;
        }
    if(st == -1)
        ma=360;
    for(i=0;i<360;i++){
        if(m[(st+i)%360]){
            cou++;
            ma=max(cou-1,ma);
        }
        else
            cou=0;
    }
    printf("%d\n",ma);

}

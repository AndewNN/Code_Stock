/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[200100];
map<int,int> mp;
int fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}
int main(){
    int n,i,a,aa,b,bb,nn,ma,idx,ch;
    scanf("%d",&n);
    for(i=0;i<=200000;i++)
        p[i]=i;
    for(i=1;i<=n;i++){
        scanf("%d",&nn);
        while(nn--){
            scanf("%d %d",&aa,&bb);
            if(bb>50){
                p[i] = fr(p[aa]);
            }
        }
    }
    for(i=1;i<=n;i++)
        mp[fr(p[i])]++;
    ma=0;
    for(i=1;i<=n;i++)
        ma=max(ma,mp[i]);
    printf("%d\n",max(0,ma-1));
}
/*

5
0
1
2
2
5

5
2 2 10 5 15
2 1 51 5 49
2 2 70 4 5
2 2 65 5 10
1 1 10

6
1 2 60
0
1 4 60
1 6 60
1 6 60
0

*/

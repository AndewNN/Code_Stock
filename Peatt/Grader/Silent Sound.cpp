/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
deque<int> ma,mi;
int a[1000100];
int main()
{
    int n,m,c,x,i,ch=1;
    scanf("%d %d %d",&n,&m,&c);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        while(!ma.empty()&&a[ma.back()]<a[i])    ma.pop_back();
        while(!mi.empty()&&a[mi.back()]>a[i])    mi.pop_back();
        while(!ma.empty()&&ma.front()<=i-m)     ma.pop_front();
        while(!mi.empty()&&mi.front()<=i-m)     mi.pop_front();
        ma.push_back(i),mi.push_back(i);
        if(i>=m){
            if(a[ma.front()]-a[mi.front()]<=c){
                printf("%d\n",i-m+1);
                ch=0;
            }
        }
    }
    if(ch)
        printf("NONE");

    return 0;
}


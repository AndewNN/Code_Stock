/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[1001000];
int main()
{
    int n,i,o;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&o);
        if(a[o]==0){
            printf("%d\n",o);
        }
        a[o]++;
    }
    return 0;
}


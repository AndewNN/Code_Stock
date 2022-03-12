/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[200100];
int b[200100],r[200100],bb[200100],rb[200100];
int main()
{
    int z,i,now,mx=-1;
    scanf("%d",&z);
    bb[2*z+1]=rb[2*z+1]=0;
    for(i=1;i<=z;i++){
        scanf(" %c",&a[i]);
        a[i+z] = a[i];
    }
    for(i=1;i<=2*z;i++){
        if(a[i]=='b'){
            b[i] = b[i-1]+1;
            r[i] = 0;
        }
        if(a[i]=='r'){
            r[i] = r[i-1]+1;
            b[i] = 0;
        }
        if(a[i]=='w'){
             r[i] = r[i-1]+1;
             b[i] = b[i-1]+1;
        }
    }
    for(i=2*z;i>=1;i--){
        if(a[i]=='b'){
            bb[i] = bb[i+1]+1;
            rb[i] = 0;
        }
        if(a[i]=='r'){
            rb[i] = rb[i+1]+1;
            bb[i] = 0;
        }
        if(a[i]=='w'){
            rb[i] = rb[i+1]+1;
            bb[i] = bb[i+1]+1;
        }
    }
    for(i=1;i<=z;i++){
        now = max(r[i-1],b[i-1]) + max(rb[i],bb[i]);
        if(now > mx){
            mx = now;
        }
    }
    if(mx > z){
        mx = z;
    }
    printf("%d",mx);
    return 0;
}

/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100],qa[6],qb[6];
int main()
{
    int q,i,n,ca,cb,now,ch;
    scanf("%d",&q);
    while(q--){
        ca=0,cb=0,ch=1;
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=0;i<n;i++) scanf("%d",&b[i]);
        for(i=0;i<n;i++) qa[a[i]]++,qb[b[i]]++;
        for(i=1;i<=5;i++){
            now=abs(qa[i]-qb[i]);
            if(now%2!=0){
                ch=0;
                break;
            }
            if(qa[i]>qb[i])
                ca+=now/2;
            else
                cb+=now/2;
        }
        for(i=1;i<=5;i++)
            qa[i]=qb[i]=0;
        if(ch==0){
            printf("-1\n");
            continue;
        }
        if(ca==cb){
            printf("%d\n",ca);
        }
        else
            printf("-1\n");


    }
    return 0;
}
/*

2
9
1 2 4 1 4 1 4 4 1
2 3 5 2 5 3 2 3 3
5
1 2 3 4 5
1 1 2 3 5

*/

/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int a[265];
int play(int l,int r,int n)
{
    if(n==0 && a[l]!=0)
        return 0;
    if(l==r)
    {
        if(n==a[l])
            return 1;
    }
    if(r-l==1)
    {
        if(n==0)
        {
            if(a[l]==0 && a[r]==2)
                return 1;
        }
        if(n==1)
        {
            if(a[l]==0 && a[r]==1)
                return 1;
            if(a[l]==1 && a[r]==1)
                return 1;
            if(a[l]==1 && a[r]==2)
                return 1;
            if(a[l]==2 && a[r]==0)
                return 1;
            if(a[l]==2 && a[r]==2)
                return 1;
        }
        if(n==2)
        {
            if(a[l]==0 && a[r]==0)
                return 1;
            if(a[l]==1 && a[r]==0)
                return 1;
            if(a[l]==2 && a[r]==1)
                return 1;
        }
        return 0;
    }
    int ch=0;
    for(int k=l;k<=r-1;k++)
    {
        if(n==0)
        {
            if(play(l,k,0) && play(k+1,r,2))
                ch=1;
        }
        if(n==1)
        {
            if(play(l,k,0) && play(k+1,r,1))
                ch=1;
            if(play(l,k,1) && play(k+1,r,1))
                ch=1;
            if(play(l,k,1) && play(k+1,r,2))
                ch=1;
            if(play(l,k,2) && play(k+1,r,0))
                ch=1;
            if(play(l,k,2) && play(k+1,r,2))
                ch=1;
        }
        if(n==2)
        {
            if(play(l,k,0) && play(k+1,r,0))
                ch=1;
            if(play(l,k,1) && play(k+1,r,0))
                ch=1;
            if(play(l,k,2) && play(k+1,r,1))
                ch=1;
        }
    }
    return ch;
}
int main()
{
    int q=20,n,i,j,len;
    char o;
    while(q--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf(" %c",&o);
            a[i]=o-'0';
        }
        printf((play(0,n-1,0)? "yes\n" : "no\n"));


    }


    return 0;
}
/*

4 0201
5 10212
6 002000
5 01010
5 02112
5 11020
5 10112
5 02000
5 12122
5 12201
5 02200
5 01200
5 10102
5 10210
5 12110
5 12112
5 20122
5 01022
2 00
2 02

0 02 021 021021110211 002021021110211211021021110211211021021110211211
1 01 0211 021021110211211
2 21 02111 02021021110211211021021110211211021021110211211

02
*/







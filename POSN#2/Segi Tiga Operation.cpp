/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int go(int l,int r)
{
    int now;
    for(int k=l;k<r;k++)
        now=f(play(l,k),play(k+1,r));
}
int play(int l,int r)
{
    if(l+1==r)
        return f(l,r);

    for(int k=l;k<r;k++)

}
int f(int a,int b);
{

}
int main()
{



    return 0;
}


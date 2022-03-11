/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a<b)
            swap(a,b);
        if(a%b==0)
            break;
        a%=b;
    }
    return b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b)
        swap(a,b);
    if(b==0){
        printf("%d",a);
        return 0;
    }
    printf("%d",gcd(a,b));

    return 0;
}


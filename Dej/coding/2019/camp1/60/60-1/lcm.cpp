/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,e;
    scanf("%d",&n);
    scanf("%d",&a);
    n--;
    while(n--){
        scanf("%d",&b);
        if(b<a){
            swap(a,b);
        }
        d = a,e=b;
        while(b%a!=0){
            c = b;
            b = a;
            a = c%a;
        }
        a = d/a*e;
    }
    printf("%d",a);
    return 0;
}

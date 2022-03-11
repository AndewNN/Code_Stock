/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<int> hp;
struct A
{
    int i,x;
    bool operator < (const A&o)const{
        return x>o.x;
    }
};
struct B
{
    int i,y,j;
    bool operator < (const B&o)const{
        return y<o.y;
    }
};
A a[500500];
B b[500500];
long long sum;
int ans[500500];
int main()
{
    int n,i,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i].x);
        a[i].i=i;
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i].y);
    }
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++){
        hp.push(abs(a[i].x+b[i].y));
    }
    for(i=0;i<n;i++){
        ans[i]=hp.top();
        hp.pop();
    }
    l=hp.top();
    hp.pop();
    for(i=0;i<n-1;i++){
        sum+=abs(ans[i]-ans[i+1]);
    }
    printf("%lld",sum);
    return 0;
}
/*

3
158 168 139
132 104 140

*/

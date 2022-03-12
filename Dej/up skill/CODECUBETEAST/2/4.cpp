#include<bits/stdc++.h>
using namespace std;
priority_queue<long long> hp;
int main()
{
    long long a,b,c,sum;
    scanf("%lld %lld %lld",&a,&b,&c);
    hp.push(a);
    hp.push(b);
    hp.push(c);
    sum = hp.top();
    hp.pop();
    sum += hp.top();
    hp.pop();
    sum -= hp.top();
    hp.pop();
    printf("%lld",sum);
    return 0;
}

/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
deque<long long> ma,mi;
long long a[1000100];
int main()
{
    long long n,p,q,i,j,sum1=0,sum2=0;
    scanf("%lld %lld %lld",&n,&p,&q);
    p--;
    j = 0;
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        while(!ma.empty() && a[i] >= a[ma.back()]) ma.pop_back();
        while(!mi.empty() && a[i] <= a[mi.back()]) mi.pop_back();
        ma.push_back(i);
        mi.push_back(i);
        while(!ma.empty() && !mi.empty() && a[ma.front()] - a[mi.front()] > q){
            j++;
            while(!ma.empty() && ma.front() < j) ma.pop_front();
            while(!mi.empty() && mi.front() < j) mi.pop_front();
        }
        sum1 += i - j + 1;
    }
    while(!ma.empty()){
        ma.pop_back();
    }
    while(!mi.empty()){
        mi.pop_back();
    }
    j = 0;
    for(i=0;i<n;i++){
        while(!ma.empty() && a[i] >= a[ma.back()]) ma.pop_back();
        while(!mi.empty() && a[i] <= a[mi.back()]) mi.pop_back();
        ma.push_back(i);
        mi.push_back(i);
        while(!ma.empty() && !mi.empty() && a[ma.front()] - a[mi.front()] > p){
            j++;
            while(!ma.empty() && ma.front() < j) ma.pop_front();
            while(!mi.empty() && mi.front() < j) mi.pop_front();
        }
        sum2 += i - j + 1;
    }
    printf("%lld",sum1-sum2);
    return 0;
}

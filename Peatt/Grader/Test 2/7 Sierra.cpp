/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A
{
    int u,w,state;
    bool operator < (const A&o)const{
        return w>o.w;
    }
};
priority_queue<A> hp;
vector<A> g[2010];
A tt;
int dis[2010][2010];
int main()
{

    return 0;
}

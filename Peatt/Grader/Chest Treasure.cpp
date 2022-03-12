/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    long long a,b,c,d,ty,i;
    bool operator < (const A&o) const{
        if(i != o.i) return i > o.i;
        return ty < o.ty;
    }
};
priority_queue<A> hp;
stack<long long> st;
int main()
{
    long long n,m,i,j,x,s,t,a,b,c,d,aa,bb,cc,dd,ch,ans=-1,cou=0;
    scanf("%lld %lld",&n,&m);
    while(n--){
        scanf("%lld %lld %lld",&x,&s,&t);
        m = x;
        a = b = c = d = 0;
        while(x%2==0 && x != 1){
            x/=2;
            a++;
        }
        while(x%3==0 && x != 1){
            x/=3;
            b++;
        }
        while(x%5==0 && x != 1){
            x/=5;
            c++;
        }
        while(x%7==0 && x != 1){
            x/=7;
            d++;
        }
        hp.push({a,b,c,d,1,s});
        hp.push({-a,-b,-c,-d,2,t+1});
    }
    aa = hp.top().a;
    bb = hp.top().b;
    cc = hp.top().c;
    dd = hp.top().d;
    st.push(hp.top().i);
    hp.pop();
    while(!hp.empty()){
        a = hp.top().a;
        b = hp.top().b;
        c = hp.top().c;
        d = hp.top().d;
        t = hp.top().ty;
        s = hp.top().i;
        hp.pop();
        if(t == 1){
            aa += a;
            bb += b;
            cc += c;
            dd += d;
            st.push(s);
        }else{
            x = 1;
            ch = 0;
            if(aa > 0){
                x = x*(aa+1);
                ch = 1;
            }
            if(bb > 0){
                x = x*(bb+1);
                ch = 1;
            }
            if(cc > 0){
                x = x*(cc+1);
                ch = 1;
            }
            if(dd > 0){
                x = x*(dd+1);
                ch = 1;
            }
            if(ch = 0){
                x = 0;
            }
            if(x == ans){
                cou += s - st.top();
                st.pop();
            }else if(x > ans){
                ans = x;
                cou = s - st.top();
                st.pop();
            }else{
                st.pop();
            }
            aa += a;
            bb += b;
            cc += c;
            dd += d;
        }
 //       printf("test %d %d %d %d\n",aa,bb,cc,dd);
    }
    printf("%lld %lld\n",ans,cou);
    return 0;
}

/*

5 10
3 0 4
2 2 3
5 4 7
6 7 9
2 3 3

5 10
5 0 4
5 2 3
5 4 7
5 6 9
5 3 3


*/

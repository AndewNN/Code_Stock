/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
queue<int> m[11],mm;
int a[10100];
int main()
{
    int nc,ns,i,c,s,id;
    char opr;
    scanf("%d %d",&nc,&ns);
    while(ns--)
    {
        scanf("%d %d",&c,&s);
        a[s]=c;
    }
    while(1)
    {
        scanf(" %c",&opr);
        if(opr=='E'){
            scanf("%d",&id);
            if(!mm.empty()&&mm.front()!=a[id])
                if(m[a[id]].empty())
                    mm.push(a[id]);
            if(mm.empty())
                mm.push(a[id]);
            m[a[id]].push(id);
        }
        if(opr=='D'){
            if(mm.empty()){
                printf("empty\n");
                continue;
            }
            printf("%d\n",m[mm.front()].front());
            m[mm.front()].pop();
            if(m[mm.front()].empty())
                mm.pop();
        }
        if(opr=='X'){
            return 0;
        }
    }


    return 0;
}
/*

2 6
1 41
1 42
1 43
2 201
2 202
2 203
E 41
E 201
D
E 202
E 42
E 43
D
E 203
D
D
D
X

*/

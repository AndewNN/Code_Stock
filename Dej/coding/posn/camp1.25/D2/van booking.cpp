/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
int id,day;
bool operator < (const A&o) const{
if(day!=o.day) return day > o.day;
else return id>o.id;
}
};
priority_queue< A >he;
A temp;
int main()
{
	int n,k,i;
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++){
        he.push({i,0});
	}
	while(n--){
        temp = he.top();
        he.pop();
        printf("%d\n",temp.id);
        scanf("%d",&i);
        temp.day+=i;
        he.push(temp);
	}
    return 0;
}

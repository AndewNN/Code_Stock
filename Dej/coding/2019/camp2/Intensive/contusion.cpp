#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,c,l,r,mid,sum,a,b;
    scanf("%d %d %d %d",&n,&x,&y,&c);
    if(c == 1){
        printf("0\n");
        return 0;
    }
    l = 1;
    r = 30000;
    while(l < r){
        mid = (l+r)/2;
        sum = 0;
        if(x + mid > n){
            sum += ((mid+2)*(mid+1))/2;
            a = x + mid -n;
            sum -= ((a+2)*(a+1))/2;
        }else{
            sum += ((mid+2)*(mid+1))/2;
        }
        if(x - mid < 0){
            sum += ((mid+2)*(mid+1))/2;
            a = x - mid +n;
            sum -= ((a+2)*(a+1))/2;
        }else{
            sum += ((mid+2)*(mid+1))/2;
        }
        if(y + mid > n){
            sum += ((mid+2)*(mid+1))/2;
            a = y + mid -n;
            sum -= ((a+2)*(a+1))/2;
        }else{
            sum += ((mid+2)*(mid+1))/2;
        }
        if(y - mid < 0){
            sum += ((mid+2)*(mid+1))/2;
            a = y - mid +n;
            sum -= ((a+2)*(a+1))/2;
        }else{
            sum += ((mid+2)*(mid+1))/2;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, b;
    scanf("%lf %lf",&a,&b);
    printf("Plus: %.2lf\n",a+b);
    printf("Minus: %.2lf\n",a-b);
    printf("Multiply: %.2lf\n",a*b);
    printf("Divide: %.2lf\n",a/b);
    printf("Modulo: %d.00\n",int(a)%int(b));
    printf("Power: %.2lf\n",pow(a,b));
    printf("Root: %.2lf\n",pow(a,1/b));
}
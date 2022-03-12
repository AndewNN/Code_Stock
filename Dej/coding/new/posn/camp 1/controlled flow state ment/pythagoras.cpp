/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,ans;
scanf("%lf %lf %lf",&a,&b,&c);
if(a==0.00){
    ans = sqrt(pow(c,2)-pow(b,2));
    printf("%.2lf",ans);
}else if(b==0.00){
    ans = sqrt(pow(c,2)-pow(a,2));
    printf("%.2lf",ans);
}else{
    ans = sqrt(pow(a,2)+pow(b,2));
    printf("%.2lf",ans);
}
    return 0;
}

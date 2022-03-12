/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
int a,c;
scanf("%d",&a);
for(int b=1;b<=a;b++){
    scanf("%d",&c);
for(int e=1;e<=c;e++){
    for(int d=1;d<=4*c+3;d++){
if(d<=c){
if(e==1 ||e==(c+1)/2){
    printf("*");
}else if(e<(c+1)/2){
if(d==1||d==c){
    printf("*");
}else{
printf("-");
}
}else{
if(d==1){
    printf("*");
}else{
printf("-");
}
}
}else if(d==c+1){
    printf("-");
}else if(d<=2*c+1){
if(e==1 ||e==c){
    printf("*");
}else{
    if(d==c+2||d==2*c+1){
    printf("*");
}else{
printf("-");
}
}
}else if(d == 2*c+2){
    printf("-");
}else if(d<=3*c+2){
if(e==1 ||e==(c+1)/2||e==c){
    printf("*");
}else if(e<(c+1)/2 && d==2*c+3){
    printf("*");
}else if(e<c && d==3*c+2 && e>(c+1)/2){
    printf("*");
}else{
    printf("-");
}
}else if(d== 3*c+3){
    printf("-");
}else if(d<=4*c+3){
if(d==c*3+4 || d== 4*c+3){
    printf("*");
}else{
if(e==1){
    printf("-");
}else if(e>1){
if(d<3*c+3+e){
        printf("-");
}else if(d==3*c+3+e){
printf("*");
}else if(d>3*c+3+e){
printf("-");
}

}
}
}
    }
    printf("\n");
}
}
    return 0;
}

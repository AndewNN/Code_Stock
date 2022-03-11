#include<stdio.h>
#include<string.h>
int main(){
int a,d,e,f,g,h;
scanf("%d\n",&a);
for(int b=0;b<a;b++){
    scanf("%d",&d);
h = d%1000;
d = d-h;
e = d/1000;
d = h;
h = d%100;
d = d-h;
f = d/100;
d = h;
h = d%10;
d = d-h;
g = d/10;
d = h;
for(int i=0;i<e;i++){
    printf("M");
}
if(f==9){
    printf("CM");
}else if(f==4){
    printf("CD");
}else{
if(f>=5){
        printf("D");
        f = f-5;
}
for(int i=0;i<f;i++){
    printf("C");
}
}
if(g==9){
    printf("XC");
}else if(g==4){
    printf("XL");
}else{
if(g>=5){
        printf("L");
        g = g-5;
}
for(int i=0;i<g;i++){
    printf("X");
}
}
if(d==9){
    printf("IX");
}else if(d==4){
    printf("IV");
}else{
if(d>=5){
        printf("V");
        d = d-5;
}
for(int i=0;i<d;i++){
    printf("I");
}
}
    printf("\n");
}
return 0;
}

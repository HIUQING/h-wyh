#include <stdio.h>
 int main(){
    int a;
    long long b;
    double c;
    char d;
    char e[100];

    scanf("%d", &a);
    scanf("%lld",&b);
    scanf("%lf",&c);
    scanf(" %c",&d);
    scanf("%s",e);
    printf("%d\n%lld\n%.1lf\n%c\n%s\n",a ,b,c,d,e);

 return 0;
 }
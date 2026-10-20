#include <stdio.h>

int main() {
   int a, b,c;
   int s ,v;
   scanf("%d%d%d",&a,&b,&c);
   s=2*(a*b+b*c+c*a);
   v=a*b*c;
   printf("%d\n%d\n",s,v);
   
    return 0;
}
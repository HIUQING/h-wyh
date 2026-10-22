#include <stdio.h>

int main() {
   int A,B,C;
   float avg;
   scanf("%d%d%d",&A,&B,&C);
   avg=(A+B+C)/3;
   if(avg<60){
    printf("YES");
   }
   else{printf("NO");}
    return 0;
}
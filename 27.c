#include <stdio.h>

int main() {
    int a, b,c;
    int max,min;
   scanf("%d%d%d",&a,&b,&c);
  if(a>=c&&a>=b){max=a;}
   else if(c>=a&&c>=b){max=c;}
else{max=b;}
if(a<=b&&a<=c){min=a;}
  else if(c<=a&&c<=b){min=c;}
  else{min=b;}
  printf("The maximum number is : %d\n",max);
  printf("The minimum number is : %d\n",min);
    return 0;
}
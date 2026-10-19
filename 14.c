#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
    double x1 ,y1,x2,y2;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    double de,dm,dr;
    de=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    dm=fabs(x1-x2)+fabs(y1-y2);
    dr=fabs(dm-de);
    
    printf("%.18f\n",dr);


    return 0;
}
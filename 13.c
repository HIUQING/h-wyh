#include <stdio.h>

int main() {
    double F,K,C;
    scanf("%lf",&K);

    C=K-273.15;
    F=C*1.8+32;
    printf("%.6lf\n",F);


   
    return 0;
}
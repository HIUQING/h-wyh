#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int ge,shi,bai,qian;
    ge=num%10;
    shi=(num/10)%10;
    bai=(num/100)%10;
    qian=(num/1000)%10;
    int sum;
    sum=ge+shi+bai+qian;
    printf("%d",sum);
    return 0;
}
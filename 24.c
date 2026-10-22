#include <stdio.h>

int main() {
    int n,f;
    scanf("%d",&n);
    if(n%2==0){
     f=n/2;
        printf("%d",f);
    }
    else if(n%2!=0){
        f=1+3*n;
        printf("%d",f);
    }
    return 0;
}
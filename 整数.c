#include <stdio.h>

int main() {
    int n;
    while (scanf("%d ", &n) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        printf("%d\n",n);
    }
    return 0;
}
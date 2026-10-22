#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
   if(a%100<=5&&a%100>=3)//提取月份,如果是YYYYXXMMa/100%100求
   {
    printf("spring");
   }
    else if(a%100<=8&&a%100>=6){
        printf("summer");
    }
    else if(a%100<=11&&a%100>=9){
        printf("autumn");
    } 
    else {
        printf("winter");}
    
    return 0;
}
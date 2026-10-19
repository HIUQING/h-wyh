#include <stdio.h>

int main() {
    int sec1;
    scanf("%d",&sec1);
    int min,hou,sec2;
    hou=sec1/3600;
	min=(sec1/60)%60;
	sec2=sec1-hou*3600-min*60;
    printf("%.1d%.1d%d\n",hou,min,sec2);
    return 0;
}
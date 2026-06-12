//print percentage of 4 subjects whose marks are out of 40
#include <stdio.h>

int main(){
    int a,b,c,d;
    a=37; b=32; c=30; d=35;
    printf("English: %d/40\n ",a);
    printf("Physics: %d/40\n ",b);
    printf("Chemistry: %d/40\n ",c);
    printf("Mathematics: %d/40\n ",d);
    float temp,perc;
    temp=(a+b+c+d)*100;
    perc=temp/160;
        printf("Final percentage: %f percent\n",perc);
        return 0;
}
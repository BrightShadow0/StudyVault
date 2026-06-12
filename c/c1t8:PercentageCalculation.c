#include <stdio.h>

int main(){
float e,p,c,m,cs, perc;
e = 92; p = 77; c = 90; m = 95; cs = 86;
printf("Entries are: \n");
printf("English: %f\n",e);
printf("Physics: %f\n",p);
printf("Chemistry: %f\n",c);
printf("Maths: %f\n",m);
printf("Computer Science: %f\n",cs);
perc = (e+p+c+m+cs)/5;
printf("Percentage is: %f percent\n",perc);
}
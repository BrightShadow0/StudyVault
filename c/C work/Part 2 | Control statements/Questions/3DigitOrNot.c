//take positive integer input and tell if it is a three digit number or not

#include <stdio.h>
int main(){
int integer;
printf("Input positive integer: ");
scanf("%d",&integer);
if(integer>99&&integer<1000){
    printf("Entry is three digit integer");
}
else{
        printf("Entry is not three digit integer");
}
    return 0;
}
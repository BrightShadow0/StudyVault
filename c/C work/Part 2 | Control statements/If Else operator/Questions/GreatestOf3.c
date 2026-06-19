//take 3 positive integers and print greatest

#include <stdio.h>
int main(){
int a,b,c;
printf("\nGreatest of 3 finder\n\n");

printf("Enter three numbers: ");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c){
    printf("%d is greatest\n",a);
}
if(b>a&&b>c){
    printf("%d is greatest\n",b);
}
if(c>a&&c>b){
    printf("%d is greatest\n",c);
}
    return 0;
}
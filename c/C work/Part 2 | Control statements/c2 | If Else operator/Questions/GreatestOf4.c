//take 4 positive integers and print greatest

#include <stdio.h>
int main(){
int a,b,c,d;
printf("\nGreatest of 4 integers\n\n");
printf("Enter fours numbers in sequence: ");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b&&a>c&&a>d){
printf("%d is greatest\n",a);
}
if(b>a&&b>c&&b>d){
printf("%d is greatest\n",b);
}  
if(c>a&&c>b&&c>d){
printf("%d is greatest\n",c);
}
if(d>a&&d>b&&d>c){
printf("%d is greatest\n",d);
}
    return 0;
}
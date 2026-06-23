//take 3 positive integers and print greatest (given that && and || not allowed)
#include <stdio.h>
int main(){
int a,b,c;
printf("\nGreatest of 3 finder\n\n");
printf("Enter three numbers: ");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
if(a>c){
    printf("%d is greatest",a);
}
else{
       printf("%d is greatest",c);
}
}
    return 0;
}
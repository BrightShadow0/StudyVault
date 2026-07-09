//take 3 positive integers and verify whether they can be sides of triangle

#include <stdio.h>
int main(){
int a,b,c;
printf("\nTriangle sides verifier\n\n");

printf("Enter three values: \n");
scanf("%d %d %d",&a,&b,&c);

if((a+b)>c&&(b+c)>a&&(c+a)>b){
    printf("\nGiven values can be sides of triangle\n");
}
else{
        printf("\nGiven values cannot be sides of triangle\n");

}
    return 0;
}
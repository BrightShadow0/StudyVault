#include <stdio.h>
int main(){
int n; 
printf("Enter marks for grade: ");
scanf("%d",&n);

    if(n>80){
        printf("A grade");
    }
    if(n>60){
        printf("B grade");
    }
    if(n>40){
        printf("C grade");
    }
    else{
        printf("D grade");
    }
}
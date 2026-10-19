#include <stdio.h>
#include <string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    fputs(arr,stdout);

    return 0;
}
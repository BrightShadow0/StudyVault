#include <stdio.h>
int main(){

    FILE *fp;
    fp = fopen("student.txt", "a");
    
    if(fp == NULL)
{
    printf("File could not be opened");
    return 1;
}

int roll;
char name[50];

printf("Enter roll number and name: ");
scanf("%d %49s", &roll, name);

fprintf(fp, "%d %s\n", roll, name);

    return 0;
}
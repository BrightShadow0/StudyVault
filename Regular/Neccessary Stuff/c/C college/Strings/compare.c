#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50],str2[50];
    fgets(str1,50,stdin);
    fgets(str2,50,stdin);
    if(strcmp(str1,str2)==0)
    {
        printf("Equal strings");
    }
    else
    {
        printf("Not equal");
    }
    return 0;
}
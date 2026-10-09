#include <stdio.h>
#include <string.h>
int main()
{
char str1[50],str2[50];
fgets(str1,50,stdin);
strcpy(str2,str1);
puts(str2);
}
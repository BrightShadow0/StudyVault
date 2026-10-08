#include <stdio.h>
#include <string.h>
int main(){
char str[100]; int i,wc=1;
fgets(str,100,stdin);
for(i=0;i<strlen(str);i++)
{
    if(str[i] == ' ')
    wc++;
}
printf("Word count: %d",wc);
return 0;
}
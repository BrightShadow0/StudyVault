#include <stdio.h>
#include <string.h>
int main()
{
char str[50],ch;int i,pos=-1;
printf("Enter string: ");
fgets(str,50,stdin);
printf("Enter letter to find index of: ");
scanf("%c",&ch);
for(i=0;i<strlen(str);i++){
    if(str[i]==ch){
    pos=i;
    break;
    }
}
if(pos!=-1)
    printf("Position: %d",pos);
else
    printf("Not found");

return 0;
}
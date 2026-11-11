#include <stdio.h>
int main(){
    int a;
    for(a=65;a<91;a++){
        printf("%d ",a);
        char ch = (char) a;
        printf("%c \n",ch);
    }
    return 0;
}
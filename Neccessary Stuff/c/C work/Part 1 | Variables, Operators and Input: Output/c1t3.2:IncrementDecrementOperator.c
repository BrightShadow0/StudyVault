#include <stdio.h>
int main() {
    int x = 4;
    printf("%d\n",x);
    printf("%d\n",x++); //post increment --> first update, then add
    printf("%d\n",++x); //pre increment --> first add, then update
    printf("%d\n",x--); //post decrement --> first update, then subtract
    printf("%d\n",--x); //pre decrement --> first subtract, then update
}
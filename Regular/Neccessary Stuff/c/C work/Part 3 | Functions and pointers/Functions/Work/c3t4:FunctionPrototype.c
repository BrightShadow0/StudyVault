#include <stdio.h>
void greet();
void time();
void test();
void fn();

int main(){
    fn();
    return 0;
}
void greet(){
    printf("This is greet function\n");
    test();
    return;
}
void time(){
    printf("This is the time function\n");
    return;
}
void test(){
    printf("This is the test function\n");
    time();
    return;
}
void fn(){
    printf("This is a function\n");
    greet();
    return;
}
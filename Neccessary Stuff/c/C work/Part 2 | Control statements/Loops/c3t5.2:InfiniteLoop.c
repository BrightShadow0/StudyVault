#include <stdio.h>
int main(){
int i = 1;
while(i<=10){
    printf("Hello World");
    i--; //as in this case numbers will keep getting
        //deducted from 1, and as all are less than 10,
        //it will continue infinitely in negative direction.
}
return 0;
}
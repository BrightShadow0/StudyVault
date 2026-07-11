#include <stdio.h>
int main() {
    int age, ID;
printf("Enter age: ");
scanf("%d",&age);
printf("Enter ID status (1 for yes, 0 for no): ");
scanf("%d",&ID);
    if (age >= 18 && ID == 1) {
        printf("You may enter.\n");
    }
    else{
        printf("You cannot enter.\n");
    }
    return 0;
}
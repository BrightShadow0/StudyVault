//Print table of n, by spacing out each multiple instead of putting in diff lines. n will be user input
#include <stdio.h>
int main(){
int n;
 printf("Enter number for printing table of n: ");
 scanf("%d",&n);
for(int i=1;i<=10;i++){
printf("%d ",i*n);
}
return 0;
}
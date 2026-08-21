#include <stdio.h>
int main(){
int n, i, sq;
printf("Enter number of square terms required: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
sq = i * i;
printf("%d, ",sq);
}
return 0;
}
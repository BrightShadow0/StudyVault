#include <stdio.h>
int main(){
int a[10][10],m,n,i,j,rowsum,colsum;
printf("Enter row x column: ");
scanf("%dx%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}

printf("Row-wise sum: ");
for(i=0;i<m;i++){
rowsum=0;
for(j=0;j<n;j++)
rowsum+=a[i][j];
printf("%d ",rowsum);
}

printf("\nColumn-wise sum: ");
for(j=0;j<n;j++){
colsum=0;
for(i=0;i<m;i++)
colsum+=a[i][j];
printf("%d ",colsum);
}
return 0;
}
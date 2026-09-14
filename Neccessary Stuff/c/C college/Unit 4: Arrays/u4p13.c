#include <stdio.h>
void main(){ int a[10][10], b[10][10], sum[10][10],m,n,i,j;

printf("Enter row x column for Matrix A: "); scanf("%dx%d",&m,&n);
for(i=0;i<m;i++){ for(j=0;j<n;j++){ printf("Element: "); scanf("%d",&a[i][j]);}}

printf("\nMatrix A: \n");
for(i=0;i<m;i++){ for(j=0;j<n;j++){ printf("%d     ",a[i][j]);} printf("\n");}
printf("\n");

printf("Enter row x column for Matrix B: "); scanf("%dx%d",&m,&n);
for(i=0;i<m;i++){ for(j=0;j<n;j++){ printf("Element: "); scanf("%d",&b[i][j]);}}

printf("\nMatrix B: \n");
for(i=0;i<m;i++){ for(j=0;j<n;j++){ printf("%d     ",b[i][j]);} printf("\n");}
printf("\n");

printf("\nSum Matrix: \n");
for(i=0;i<m;i++){ for(j=0;j<n;j++){ sum[i][j]=a[i][j]+b[i][j]; printf("%d     ",sum[i][j]);} printf("\n");}
printf("\n");

return;
}
#include <stdio.h>
int main(){
int a[10][10],m,n,i,j,sum=0;
scanf("%dx%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
sum+=a[i][i];
printf("%d",sum);
return 0;
}
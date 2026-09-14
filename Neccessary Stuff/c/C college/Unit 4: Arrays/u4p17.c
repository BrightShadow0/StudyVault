#include <stdio.h>
void main(){
int a[10][10],m,n,i,j,largest;
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

largest=a[0][0];

for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(a[i][j]>largest)
largest=a[i][j];

printf("%d",largest);
}
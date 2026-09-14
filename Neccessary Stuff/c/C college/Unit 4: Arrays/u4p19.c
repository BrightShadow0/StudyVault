#include <stdio.h>
int main(){
int a[10][10],m,n,i,j,isSymm=1;
scanf("%dx%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
if(m!=n)
isSymm=0;
else{
for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(a[i][j]!=a[j][i])
isSymm=0;
}
if(isSymm==1)
printf("Symmetric");
else
printf("Not Symmetric");
return 0;
}
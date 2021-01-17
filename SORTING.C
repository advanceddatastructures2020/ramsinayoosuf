#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,x,n,a[30];
clrscr();
printf("enter the total number of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
x=a[i];
a[i]=a[j];
a[j]=x;
}
}
}
printf("the elements in ascending order\n");
for(i=0;i<n;i++)
{
printf("%d\n",&a[i]);
}
getch();
}
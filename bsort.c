#include<stdio.h>
void main()
{
 int a[20],i,j,n,temp;
 printf("enter the no.of elements");
 scanf("%d",&n);
 printf("enter integers");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
   for(i=0;i<=n;i++)
 {
  for(j=0;j<=n;j++)
{
  if(a[i]>=a[j])
{
   temp = a[i];
   a[i]=a[j];
   a[j]=temp;
  }
}
}
printf("sorted elements are:");
for(i=0;i<n;i++)
printf("%d",a[i]);
}


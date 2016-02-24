#include<stdio.h>
#include</home/bossmool/myfile/sort.h>
int sort(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<=n;i++)
 {
  for(j=i+1;j<=n;j++)
{
  if(a[i]>=a[j])
{
   temp = a[i];
   a[i]=a[j];
   a[j]=temp;
  }
}
}
  for(i=1;i<=n;i++)
    printf("%d",a[i]);
return 0;
}

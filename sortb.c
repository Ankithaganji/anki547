#include<stdio.h>
#include</home/bossmool/myfile/sort.h>
int a[20];
int main()
{
 int i,j,n,temp;
 printf("enter no.of elements");
 scanf("%d",&n);
 printf("enter %d elements\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("sorted elements are:");
 sort(a,n);
}

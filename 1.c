# hunter_set1
#include<stdio.h>
int main()
{
 int l;
 scanf("%d\n",&l);
 int a[l],i,j=0,;
  for(i=0;i<l;i++)
  scanf("%d\n",&a[i]);
    for(i=0;i<l;i++)
    {
      if(a[j]==a[i+1])
 {
   printf("\n%d",a[j]);
 for(j=i+1;j<l;j++)
   a[j]=a[j+1];
   a[l]='\0';
   l--;
 }
 j++;
 }
 return 0;
 }

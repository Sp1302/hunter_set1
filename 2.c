#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int n,i,j,temp;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d\n",&a[i]);
	for(i=0;i<n;i++)
	{
	for(j=i;j<n;j++)
		{
			if(a[j]>a[i])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}


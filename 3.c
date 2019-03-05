# hunter_set1
#include <stdio.h>
#include<conio.h>
int main() 
{
	int n,i;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d\n",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		printf("%d\n",a[i]);
	}
	return 0;
}

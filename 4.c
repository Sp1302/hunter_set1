# hunter_set1
#include <stdio.h>
#include<conio.h>
int main()
{
	int i,n,j,count;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			count++;
		}
		if(count==1)
		printf("%d\n",a[i]);
	}
	return 0;
}

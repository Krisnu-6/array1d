#include<stdio.h>

main()
{
	int n,a[100],i;
	printf("enter arrey size = ");
	scanf("%d",&n);
	
	printf("n-----arrey element-----\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
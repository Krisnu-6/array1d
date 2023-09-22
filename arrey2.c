#include<stdio.h>

main()
{
	int n;
	printf("enter array size =");
	scanf("%d",&n);
	int arr[n],i;
	printf("enter array element");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
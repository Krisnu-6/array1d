#include<stdio.h>


main()
{
	int n,ave;
	printf("enter array size=");
	scanf("%d",&n);
	int arr[n],array[n],sum[n],i;
	printf("-----enter 1st array element-----\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("-----enter 2nd array element-----\n");
	scanf("%d",&arr[i]);
	{
		printf("array[%d] = ",i);
		scanf("%d",array[i]);
	}
	printf("-----sum of array element-----\n");
	for(i=0;i<n;i++)
	{
		sum[i] = arr[i] + array[i];
		printf("%d\n",sum[i]);
	}
}
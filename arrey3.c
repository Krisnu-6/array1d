#include<stdio.h>

main()
{
	int n,sum = 0,ave;
	printf("enter array size = ");
	scanf("%d",&n);
	int arr[n],i;
	printf("enter array element");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum = sum + arr[i];
	}
	
	printf("sum of array = %d\n",sum);
	ave = sum/n;
	printf("average = %d",ave);
}
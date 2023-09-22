#include<stdio.h>

main()
{
	int n,n1,k;
	printf("enter size of A arrey = ");
	scanf("%d",&n);
	printf("enter size of B arrey = ");
	scanf("%d",&n1);
	int a[n],b[n1],merg[200],i;
	printf("-----enter 1st arrey element-----\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		merg[i] = a[i];
		k = i;
		k++;
	}
	
	printf("-----enter 2nd arrey element-----\n");
	
	for(i=0;i<n1;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
		merg[k] = b[i];
		k++;
		
	}
	
	printf("-----merg of arrey element-----\n");
	
	for(i=0;i<n+n1;i++)
	{
		printf("a[%d] = %d\n",i,merg[i]);
	}
}
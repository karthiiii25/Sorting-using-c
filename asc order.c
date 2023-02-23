#include<stdio.h>
int main()
{
	int a[10];
	int n,i,j,temp,temp1,p,q;
	printf("enter the array size:\n"); //5
	scanf("%d",&n);
	printf("enter the array elements:\n"); //4,3,2,9,7
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++) //4,3,2,9,7
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;p<n;p++)
	{
		for(q=p+1;q<n;q++)
		{
			if(a[p]<a[q])
			{
				temp1=a[p];
				a[p]=a[q];
				a[q]=temp1;
			}
		}
	}
	printf("\n decending order:\n");
	for(p=0;p<n;p++)
	{
		printf("%d\t",a[p]);
	}
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int search(int a[], int key, int lb, int ub);
void insertion(int a[], int lb, int ub);
void Merge(int a[], int lb, int mid, int ub);
void MergeSort(int A[], int lb, int ub);

int n, x, y;

int main()
{
	int i,k=0,j;
	printf("Enter size of the array ");
	scanf("%d",&n);
	printf("Enter array elements ");
	int *a =(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter length of array on applying insertion sort ");
	scanf("%d",&x);
	printf("Size of subarray upto which binary search is to be applied ");
	scanf("%d",&y);
	MergeSort(a,0,n-1);
	for(i=1;i<=(int)ceil(n/x);i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d\t",a[k]);
			k++;
		}
		printf("\n");
	}
	for(i=k;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}


void insertion(int a[],int lb,int ub)
{
	int i,temp,j,z;
	for(i=1;i<=ub;i++)
	{
		temp=a[i];
		j=i-1;
		if(x==y)
		{
		if (i<=(y-1))
		{
		z = search(a,temp,0,j);
        while (j>=z)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    	}
    	else if(x!=y)
    	{
    		if (i<=(y))
		{
		z = search(a,temp,0,j);
        while (j>=z)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    	}
	}
	}
		else
		{
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	}

}

int search(int a[], int key, int lb, int ub)
{
    if (ub<=lb)
        if(key>a[lb])
		return lb + 1;
		else
		return lb;

    int mid=(lb+ub)/2;

    if(key == a[mid])
        return mid+1;

    if(key > a[mid])
        return search(a, key, mid+1, ub);
    return search(a, key, ub, mid-1);
}
void Merge(int a[],int lb,int mid,int ub)
{
	int i=lb;
	int j=mid+1;
	int k=lb;
	int *b = (int*)(malloc(n*sizeof(int)));
	while(i<=mid&&j<=ub)
	{
		if(a[i]<=a[j])
		{
			a[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			k++;
			j++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
}
void MergeSort(int A[],int lb,int ub)
{

	if(lb<ub)
	{
		if(ub-lb<=(y-1))
		{
			insertion(A,lb,ub);
		}
		else
		{
			int mid = (lb+ub)/2;
			MergeSort(A,lb,mid);
			MergeSort(A,mid+1,ub);
			Merge(A,lb,mid,ub);
		}
	}
}

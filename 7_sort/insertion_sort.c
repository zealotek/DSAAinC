#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int array[], int num);

void main()
{
	int a[] = {2,6,3,4,7,8,5,4,1,0};
	insertion_sort(a, 10);
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d,",a[i]);
	}
}

void insertion_sort(int array[], int num)
{
	int i,j,temp;
	for(i=1;i<num;i++)
	{
		temp = array[i];
		for(j=i-1;j>=0;j--)
		{
			if(array[j] > temp)
			{
				array[j+1] = array[j];
			}
			else
			{
				break;
			}
		}
		array[j+1] = temp;
	}
}

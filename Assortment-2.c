#include<stdio.h>
main()
{
	int row,col,j,i;
	printf("enter the array row size : ");
	scanf("%d",&row);
	 
	printf("enter the array column size : ");
	scanf("%d",&col);
	 
	int a[row][col];
	printf("enter array's' elements:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int l=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>l)
			{
				l=a[i][j];
			}
		}
	}
	printf("the largest element is:%d\n",l);
}
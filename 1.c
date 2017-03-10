#include <stdio.h>
int main(int argc, char const *argv[])
{
	void selectBubble(int a[], int n);
	int a[5]={3,2,1,6,4};
	selectBubble(a, 5);
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

void selectBubble(int a[], int n){
	int i,j;
	int middle;
	for (i = 0; i < n-1; ++i)
	{
		for (j = i+1; j < n; ++j)
		{
			if (a[i]<a[j])
			{
				middle=a[i];
				a[i]=a[j];
				a[j]=middle;
			}
		}
	}

}
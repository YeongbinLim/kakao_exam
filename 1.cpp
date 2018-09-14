#include<stdio.h>
#include<iostream>
void binary(int a, int i)
{
	int q, w, i_1,r,a_1;
	char arr4[2 ^ 16][16] = { 0, };
	a_1 = a;
	i_1 = i;
	w = 0;
	int j;
	
	for(j=0;j<i;j++)
	{


		q = a_1 / 2;

		r = 2;
		w++;
		if (i_1 == w+1)
		{
			r = a_1 % 2;	
			r == 1 ? arr4[w] = {{"#"}} : arr4[w] = {' '};
			i_1--;
			w = 0;
		}
		printf("%s", arr4[w]);
		
		if (i_1 == 0)
			break;
	}
}
int main()
{
	int i, n, arr1[2^16], arr2[2 ^ 16], arr3[2 ^ 16];
	unsigned char a,b,c;
	printf("n= ");
	scanf_s("%d", &n);
	if (n > 2^16 && n < 1)
	{
		printf("out of range");
	}
	else
	{
		i = 0;
		for (i = 0; i < n; i++)
		{
			printf("arr1의 %d번째 값=", i);
			scanf_s("%d", &arr1[i]);
			printf("\n");
		}
		i = 0;
		for (i = 0; i < n; i++)
		{
			printf("arr2의 %d번째 값", i);
			scanf_s("%d", &arr2[i]);
			printf("\n");
		}
	}
	i = 0;
	for (i = 0; i < n; i++)
	{
		a = arr1[i];
		b = arr2[i];
		c = a | b;
		arr3[i] = c;
		binary(arr3[i], n);
	}
	
		
	


	system("pause");
	return 0;
}

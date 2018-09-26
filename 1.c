#include<stdio.h>

void binary(int* arr[], int i)
{
	int q, w, i_1, r, a_1, a = i;
	int arr1[2 ^ 16][5] = { 0, };
	char arr2[2 ^ 16][5] = { 0, };
	i_1 = i;
	int i_2 = i;
	w = 0;
	int j;

	for (j = 0; j<i; j++)
	{
		i_1 = i;
		printf("\n");
		int k = 0;
		k = arr[j];
		if (k > 0)
		{
			while (1) {
				arr1[j][i_1] = k % 2;
				k /= 2;
				i_1--;
				if (i_1 < 0)
					break;
			}
			for (w = 0; w <5; w++) {
				if (arr1[j][w] == 1)
					arr2[j][w] = '#';
				else if (arr1[j][w] == 0)
					arr2[j][w] = ' ';
				

				printf("%c", arr2[j][w]);
			}
		}
		else if (arr[j] == NULL)
		{
			break;
		}

		//	printf("%s", arr2[j][]);
	}
}

int main()
{
	int i, n, arr1[2 ^ 16], arr2[2 ^ 16], arr3[2 ^ 16];
	unsigned char a, b, c;
	printf("n= ");
	scanf_s("%d", &n);
	if (n > 2 ^ 16 && n < 1)
	{
		printf("out of range");
	}
	else
	{
		i = 0;
		for (i = 0; i < n; i++)
		{
			printf("arr1[%d]의 값=", i);
			scanf_s("%d", &arr1[i]);
			printf("\n");
		}
		i = 0;
		for (i = 0; i < n; i++)
		{
			printf("arr2[%d]의 값=", i);
			scanf("%d", &arr2[i]);
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
		
	}
	binary(arr3, n);

	system("pause");
	return 0;
}


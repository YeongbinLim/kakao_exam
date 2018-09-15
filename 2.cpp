#include<stdio.h>
#include<iostream>

int main()
{
	char arr[10] = { " ", };
	char arr1[10] = { " ", };
	int x, y, z,f,f2,temp,result;
	int num[10] = { '0', };
	gets_s(arr);
	f2 = 0;
	x = strlen(arr);
	y = 0;
	temp = 0;
	result = 0;
	int j = 0;
	for (j = 0.; j < x; j++)
	{
		arr1[y] = arr[j];
		
		f = 0;
		if (isdigit(arr[j+1]) || arr[j+1]==NULL)
		{
			if (f == 0) {
				if (arr1[1] == 'S'){
					num[0] = arr1[0]-48;
					z = pow(num[0] , 1);
				}
				else if (arr1[1] == 'D') {
					num[0] = arr1[0] - 48;
					z = pow(num[0], 2);
				}
				else if (arr1[1] == 'T') {
					num[0] = arr1[0] - 48;
					z = pow(num[0], 3);
				}
				f++;
			}
			if (f == 1 && y>1)
			{
				if (arr1[2] == '*')
				{
					z = z * 2;
					temp = temp * 2;
				}
				else if (arr1[2] == '#')
					z=z * (-1);
			
				
			}

			if (y == j)
			{
				result = z;
			}

		
			
			
			f2++;
			if (f2 == 3) {
				result = result + temp + z;
				break;
			}
			temp = z;
			z = 0;
			y = 0;
			

		}
		else
		{
			y++;
			if (f2 > 4) {
				break;
			}
		}

		

	}




	printf("%d", result);



	system("pause");
	return 0;
}

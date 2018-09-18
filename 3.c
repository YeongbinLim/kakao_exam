#include<stdio.h>
typedef struct max {
	int data;
	int address;
}max;
int main()
{
	char arr[100000][20] = { 0, };
	char arr2[100000][20] = { 0, };
	char cache[3][20] = { 0, };
	int cache_order[3] = { 0, };
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int cnt = 0;
	max ma;

	int flag;
	while (1) {
		scanf("%s", &arr[i]);
		if (arr[i][0] == 'x')
			break;

		printf("%s 입력완료\n\n", arr[i]);
		i++;

	}
	arr[i][0] == NULL;
	i = 0;
	flag = 0;
	while (1)
	{
		scanf("%s", &arr2[i]);
		if (arr2[i] != 'x')
		{
			for (j = 0; j < 30; j++) {
				cnt++;
				if (arr2[i][0] != arr[j][0])
					flag = 0;

				else {

					for (l = 0; l < 3; l++) {
						if (arr2[i][0] == cache[l][0] && flag == 0)//캐쉬 힛 
						{
							printf("cache hit \n");

							for (k = 0; k < l; k++)
							{
								if (cache_order[k] != NULL)
									cache_order[k] = cache_order[k] + 1;
							}
							cache_order[l] = 1;
							break;
						}

						else if (arr2[i][0] != cache[l][0] && l == 2) {
							cache_order[l] = 1;
							printf("not hit.\n");
							break;
						}
						else if (arr2[i][0] != cache[l][0])//캐쉬 낫힛
						{

							for (k = 0; k < 3; k++)
							{
								if (cache_order[k] != NULL)
									cache_order[k]++;
								if (arr2[i][0] == cache[k][0])
									break;

								if (cache[k][0] == NULL &&flag == 0)
								{
									cache[k][0] = arr2[i];
									cache_order[k] = 1;
									flag = 1;

									break;
								}

								else if (cache_order[k] > 4)//4말고 제일큰값 넣어야함 알고리즘 필요//새것 캐쉬에 삽입 FULL일때
								{
									cache[k][0] = arr2[i][0];
									cache_order[k] = 1;
									break;
								}

							}

						}



					}
				}
			}
		}
		else
			break;
		i++;
	}


	system("pause");
	return 0;
}

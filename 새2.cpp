#include<stdio.h>
#include <string>
#include <vector>
#include<iostream>
#include<stdlib.h>
using namespace std;

vector<string> solution(vector<string> record) {
	vector<string> answer;
	return answer;
}
int main()
{
	int size;

	
	int n, i, j, k = 0;
	float cnt[500] = { 0, }, cnt2[500] = { 0, }, cnt3[500], tmp;
	int stages[500] = { 0, };
	scanf_s("%d", &n);
	printf("\n");
	for (j = 0; j < n; j++)
	{
		cin>>stages[j];
	}
	i = 0;
	for (i = 0; i < 500; i++) {
		if (sizeof(stages) / sizeof(int) > 200000)
		{
			printf("out of range");
			break;
		}
		else {
			for (k = 0; k < 500; k++)
			{
				if (stages[i] == stages[k])
				{
					cnt[i]++;
				}
				if (stages[i] >= stages[k])
				{
					cnt2[i]++;
				}
			}

		}
	}

	for (i = 0; i < 500; i++)
	{
		cnt2[i] += 1;//�ڱ��ڽ� ���ϱ�
	}
	for (i = 0; i < 500; i++)
	{
		cnt[i] /= cnt2[i];
	}
	for (int i = 0; i < 500; i++)    // ����� ������ŭ �ݺ�
	{
		for (int j = 0; j < 500 - 1; j++)   // ����� ���� - 1��ŭ �ݺ�
		{
			if (cnt[j] < cnt[j + 1])          // ���� ����� ���� ���� ����� ���� ���Ͽ�
			{                                 // ū ����
				tmp = cnt[j];
				cnt[j] = cnt[j + 1];
				cnt[j + 1] = tmp;            // ���� ��ҷ� ����
				tmp = stages[j];
				stages[j] = stages[j + 1];
				stages[j + 1] = tmp;
			}
		}
	}


	for (i = 0; i < 500; i++)
	{
		if (stages[i] != 0) {
			printf("%d ", stages[i]);
		}
	}


	system("pause");
	return 0;
}

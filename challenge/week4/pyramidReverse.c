#include <stdio.h>

int main()
{
	int floor;     //���� �� ���� ����
	printf("�� ���� �װڽ��ϱ�? (5~100)");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--)    // i�� floor���� �ϳ��� ������ floor ��ŭ �� ���
	{
		for (int j = 0; j < floor - i; j++)  // j�� 0���� �ϳ��� ������ floor - i ��ŭ S���
		{
			printf("S");
		}
		for (int k = 0; k < i * 2 - 1; k++)   // k�� 0���� �ϳ��� ������ i * 2 - 1 ��ŭ *���
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
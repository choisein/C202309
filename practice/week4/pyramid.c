#include <stdio.h>

int main(void)
{
	int floor;  //�� �� ������ �����ϴ� ����
	printf("�� ���� �װڽ��ϱ�? (5~100)");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++)      // i�� 0���� �ϳ��� ������ �� floor �� ���
	{
		for (int j = 0; j < floor - 1 - i; j++)    //j�� 0���� �ϳ��� ������ �� �ٿ�
		{										   // floor-1-i��ŭ S���
			printf("S");
		}
		for (int k = 0; k < i*2+1; k++)      //k�� 0���� �ϳ��� ������ �� �ٿ� i*2+1��ŭ
		{
			printf("*");					// *���
		}
		printf("\n");
	}
	return 0;
}
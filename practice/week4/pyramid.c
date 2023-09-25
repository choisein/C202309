#include <stdio.h>

int main(void)
{
	int floor;  //몇 층 쌓을지 결정하는 변수
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++)      // i가 0부터 하나씩 증가해 총 floor 줄 출력
	{
		for (int j = 0; j < floor - 1 - i; j++)    //j가 0부터 하나씩 증가해 한 줄에
		{										   // floor-1-i만큼 S출력
			printf("S");
		}
		for (int k = 0; k < i*2+1; k++)      //k가 0부터 하나씩 증가해 한 줄에 i*2+1만큼
		{
			printf("*");					// *출력
		}
		printf("\n");
	}
	return 0;
}
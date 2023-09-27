#include <stdio.h>

int main()
{
	int floor;     //쌓을 층 변수 설정
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--)    // i가 floor부터 하나씩 감소해 floor 만큼 층 출력
	{
		for (int j = 0; j < floor - i; j++)  // j가 0부터 하나씩 증가해 floor - i 만큼 S출력
		{
			printf("S");
		}
		for (int k = 0; k < i * 2 - 1; k++)   // k가 0부터 하나씩 증가해 i * 2 - 1 만큼 *출력
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
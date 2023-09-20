#include <stdio.h>

int main()
{
	int num = 0;  //정수형 변수에 값 초기화
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	if (num == 0)  // 조건식: 0입력시
	{
		printf("zero");  //실행문: zero출력
	}
	else if (num == 1)
	{
		printf("one");
	}
	else if (num == 2)
	{
		printf("two");
	}
	else  // 조건식: 0,1,2 외의 숫자 입력시
	{
		printf("not 0 ~ 2");  //실행문: not 0~2 출력
	}

	return 0;
}
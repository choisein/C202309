#include <stdio.h>

long multiF(int value);  //multiF함수 선언

int main()
{
	printf("1부터 2까지의 곱은 %ld\n", multiF(2));  //multiF함수 호출
	printf("1부터 3까지의 곱은 %ld\n", multiF(3));
	printf("1부터 5까지의 곱은 %ld\n", multiF(5));
}

long multiF(int value)  //multiF함수 정의
{                       //multiF함수의 매개변수 value
	int i;
	int multi = 1;

	for (i = 1; i <= value; i = i + 1)   //i가 1부터 value값까지 1씩 더해지면서 곱하는 함수
	{
		multi = multi * i;
	}
	return multi;  //반환값
}
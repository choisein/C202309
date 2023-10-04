#include <stdio.h>

int hapf(int value);   //hapf함수 선언

int main()
{
	printf("1부터   10까지의 합은 %d\n", hapf(10) );  // hapaf함수 호출
	printf("1부터  100까지의 합은 %d\n", hapf(100) );
	printf("1부터 1000까지의 합은 %d\n", hapf(1000) );
}

int hapf(int value)  //hapf함수 정의
                    //hapf함수의 매개변수 value
{
	int i =1;
	int hap = 0;

	while (i <= value)
	{                         //i가 1부터 value까지 하나씩 증가하면서 더해지는 함수
		hap = hap + i;
		i ++;
	}

	return hap; //반환값
}

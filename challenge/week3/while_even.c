#include <stdio.h>

int main()
{
	int i = 0;
	
	while (i < 10) {
		i++;
		// i가 짝수이면 반복문 처음으로
		if (i % 2 == 0) {
			continue;
		}
		printf("%d Hello world!\n", i); // 홀수 번호로 결괏값 출력
		
	}
	return 0;
}
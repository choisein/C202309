#include <stdio.h>

int main(void) {
	int i = 0;
	do {
		i++;
		//i가 짝수이면 반복문 처음으로
		if (i % 2 == 0) {
			continue;
		}
		printf("%d Hello world!\n", i);  // 홀수번호로 결괏값 출력
	} while (i < 10);
	return 0;
}
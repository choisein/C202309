#include <stdio.h>

#define x  1  //define으로 상수 정의
#define PI  3.141592  //define으로 상수 정의

int main()
{
	double z;

	z = x + PI;  // 변수에 상수 값의 합을 저장

	printf("%f", z);  // 변수 값을 출력
}
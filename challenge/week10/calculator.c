#include <stdio.h>

/*더하기 함수*/
void summation(double * pa, double * pb, double* pr) {
	*pr = *pa + *pb;
	//포인터 pr이 변수 result를 가리킴
}

/*빼기 함수*/
void subtraction(double* pa, double* pb, double* pr) {
	*pr = *pa - *pb;
}

/*곱하기 함수*/
void multification(double* pa, double* pb, double* pr) {
	*pr = *pa * *pb;
}

/*나누기 함수*/
void division(double* pa, double* pb, double* pr) {
	*pr = *pa / *pb;
}

int main() {
	double a , b;
	printf("두 정수를 입력하세요: ");
	scanf_s("%lf %lf", &a, &b);
	
	double result; // 두 정수 계산한 결과값 저장

	/*두 정수의 주소를 매개변수로 함수 호출*/

	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

	if (b == 0) {
		printf("0으로 나눌 수 없습니다.");
		return 0;
	}
	//0으로 나눌 때 경고 메시지 출력 후 프로그램 종료

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf \n", a, b, result);
	return 0;
}
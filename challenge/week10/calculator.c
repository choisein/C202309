#include <stdio.h>

/*���ϱ� �Լ�*/
void summation(double * pa, double * pb, double* pr) {
	*pr = *pa + *pb;
	//������ pr�� ���� result�� ����Ŵ
}

/*���� �Լ�*/
void subtraction(double* pa, double* pb, double* pr) {
	*pr = *pa - *pb;
}

/*���ϱ� �Լ�*/
void multification(double* pa, double* pb, double* pr) {
	*pr = *pa * *pb;
}

/*������ �Լ�*/
void division(double* pa, double* pb, double* pr) {
	*pr = *pa / *pb;
}

int main() {
	double a , b;
	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%lf %lf", &a, &b);
	
	double result; // �� ���� ����� ����� ����

	/*�� ������ �ּҸ� �Ű������� �Լ� ȣ��*/

	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

	if (b == 0) {
		printf("0���� ���� �� �����ϴ�.");
		return 0;
	}
	//0���� ���� �� ��� �޽��� ��� �� ���α׷� ����

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf \n", a, b, result);
	return 0;
}
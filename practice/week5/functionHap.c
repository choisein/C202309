#include <stdio.h>

int hapf(int value);   //hapf�Լ� ����

int main()
{
	printf("1����   10������ ���� %d\n", hapf(10) );  // hapaf�Լ� ȣ��
	printf("1����  100������ ���� %d\n", hapf(100) );
	printf("1���� 1000������ ���� %d\n", hapf(1000) );
}

int hapf(int value)  //hapf�Լ� ����
                    //hapf�Լ��� �Ű����� value
{
	int i =1;
	int hap = 0;

	while (i <= value)
	{                         //i�� 1���� value���� �ϳ��� �����ϸ鼭 �������� �Լ�
		hap = hap + i;
		i ++;
	}

	return hap; //��ȯ��
}

#include <stdio.h>

int main()
{
	int num = 0;  //������ ������ �� �ʱ�ȭ
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	if (num == 0)  // ���ǽ�: 0�Է½�
	{
		printf("zero");  //���๮: zero���
	}
	else if (num == 1)
	{
		printf("one");
	}
	else if (num == 2)
	{
		printf("two");
	}
	else  // ���ǽ�: 0,1,2 ���� ���� �Է½�
	{
		printf("not 0 ~ 2");  //���๮: not 0~2 ���
	}

	return 0;
}
#include <stdio.h>

int main()
{
	int choice;

	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf_s("%d", &choice);

	if (choice == 1)  // ���ǽ�: 1�Է½�
	{
		printf("������ �����մϴ�.");  //"������ �����մϴ�." ���
	}
	else if (choice == 2)
	{
		printf("���� ���� �ݽ��ϴ�.");
	}
	else if (choice == 3)
	{
		printf("�����մϴ�.");
	}
	else //���ǽ�: 1,2,3 ���� ���� �Է½�
	{
		printf("�߸� �Է��ϼ̽��ϴ�.");  //"�߸� �Է��ϼ̽��ϴ�." ���
	}

	return 0;
}
#include <stdio.h>

int main()
{
	int i = 0;
	
	while (i < 10) {
		i++;
		// i�� ¦���̸� �ݺ��� ó������
		if (i % 2 == 0) {
			continue;
		}
		printf("%d Hello world!\n", i); // Ȧ�� ��ȣ�� �ᱣ�� ���
		
	}
	return 0;
}
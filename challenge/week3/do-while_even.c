#include <stdio.h>

int main(void) {
	int i = 0;
	do {
		i++;
		//i�� ¦���̸� �ݺ��� ó������
		if (i % 2 == 0) {
			continue;
		}
		printf("%d Hello world!\n", i);  // Ȧ����ȣ�� �ᱣ�� ���
	} while (i < 10);
	return 0;
}
#include <stdio.h>
#define STUDENTS 5

//�л� ���� �з� �Լ�
void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90)
		{
			grade = 'A';
		}
		else if (scores[i] >= 80)
		{
			grade = 'B';
		}
		else if (scores[i] >= 70)
		{
			grade = 'C';
		}
		else if (scores[i] >= 60)
		{
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
		}
	}
}

//���� �ջ��ϴ� �Լ�
int sumScore(int scores[]) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++)
	{
		sum += scores[i];
	}
	return sum;
}

// ���� ��հ� ���� �Լ�
double averageScores(int scores[]) {
	double average;
	int sum = sumScore(scores);
	average = (double)sum / (double)STUDENTS;
	return average;
}

//�л� ���� �ű�� �Լ�
/*�л� i�� ������ 1���� ���� �ٸ� �л��� ���ϸ� ������ ���� ������ ranks +1*/
void printRanks(int scores[]) {
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1;
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[j] > scores[i]) {
				ranks[i]++;
			}
		}
		printf("%d �л��� ������ %d �Դϴ�.\n", i+1, ranks[i]);
	}
}

int main() {
	int scores[STUDENTS];  //�л����� ������ �����ϴ� �迭

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); // ���� �� ����� ���� ���� �ӽ� ���� ����

	char target;  //Ư�� ���� �����ϴ� ����
	printf("Ư�� ���� (A, B, C ,D, F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);  //���� �з��ϴ� �Լ� ȣ��

	int sum = sumScore(scores);  // ���� �ջ��ϴ� �Լ� ȣ��
	double average = averageScores(scores);  // ���� ��� ���� �Լ� ȣ��
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printRanks(scores);  // �л� ���� �ű�� �Լ� ȣ��

	return 0;
}
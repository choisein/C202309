#include <stdio.h>
#define STUDENTS 5

//�л� ���� �з� �Լ�
void classifyStudents(int *pscores, char targetGrade) {
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		if (*pscores >= 90)
		{
			grade = 'A';
		}
		else if (*pscores >= 80)
		{
			grade = 'B';
		}
		else if (*pscores >= 70)
		{
			grade = 'C';
		}
		else if (*pscores >= 60)
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
int sumScore(int* pscores) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++)
	{
		sum += *pscores;
		pscores++;
	}
	return sum;
}

// ���� ��հ� ���� �Լ�
double averageScores(int *pscores) {
	double average;
	int sum = sumScore(pscores);
	average = (double)sum / (double)STUDENTS;
	return average;
}

//�л� ���� �ű�� �Լ�
/*�л� i�� ������ 1���� ���� �ٸ� �л��� ���ϸ� ������ ���� ������ ranks +1*/
void printRanks(int* pscores) {
	int ranks[STUDENTS];
	int* pranks = ranks;  //ranks�� ����Ű�� ������ ����

	for (int i = 0; i < STUDENTS; i++) {
		pranks[i] = 1;
		for (int j = 0; j < STUDENTS; j++) {
			if (pscores[j] > pscores[i]) {
				pranks[i]++;
			}
		}
		
		printf("%d �л��� ������ %d �Դϴ�.\n", i+1, pranks[i]);
	}
}

int main() {
	int scores[STUDENTS];    //�л����� ������ �����ϴ� �迭
	int* pscores = scores; // scores ����Ű�� ������ ���� 

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", pscores);
		pscores++;
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
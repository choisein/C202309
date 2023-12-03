#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/*������ �̸��� ������ ����ü ����*/
struct Student {
	int scores;
	char name[20];
};                
typedef struct Student StudentInfo;

/*����ü �ʱ�ȭ �Լ�*/
void initializeInfo(StudentInfo* ps) {
	printf("�л� �̸��� �Է��ϼ���: ");
	char temp[100];
	scanf_s("%s", temp, (int)sizeof(temp));
	strcpy_s(ps->name, strlen(temp) + 1, temp);  //temp ������ �Է¹��� �� name�� ����
	printf("%s�� ������ �Է��ϼ���: ", ps->name);
	scanf_s("%d", &ps->scores);

}
/*�л� ���� �з� �Լ�*/
void classifyStudents(StudentInfo *pscores, char targetGrade, int studentnum) {
	printf("�л� ���� �з�:\n");
	for (int i = 0; i < studentnum; i++) {
		char grade = ' ';
		if (pscores[i].scores >= 90)
		{
			grade = 'A';
		}
		else if (pscores[i].scores >= 80)
		{
			grade = 'B';
		}
		else if (pscores[i].scores >= 70)
		{
			grade = 'C';
		}
		else if (pscores[i].scores >= 60)
		{
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", pscores[i].name, grade);
		}
	}
	
}

/*���� �ջ��ϴ� �Լ�*/
int sumScore(StudentInfo * pscores, int studentnum) {
	int sum = 0;
	for (int i = 0; i < studentnum; i++) {
		sum += pscores[i].scores;

	}
	
	return sum;
}

/* ���� ��հ� ���� �Լ�*/
double averageScores(StudentInfo * pscores, int studentnum) {
	double average;
	int sum = sumScore(pscores, studentnum);
	average = (double)sum / (double)studentnum;
	return average;
}

/*�л� ���� �ű�� �Լ�*/
/*�л� i�� ������ 1���� ���� �ٸ� �л��� ���ϸ� ������ ���� ������ ranks +1*/
void printRanks(StudentInfo * pscores, int studentnum) {
	int ranks[100];
	int* pranks = ranks;  //ranks�� ����Ű�� ������ ����

	for (int i = 0; i < studentnum; i++) {
		pranks[i] = 1;
		for (int j = 0; j < studentnum; j++) {
			if (pscores[i].scores < pscores[j].scores) {
				pranks[i]++;
			}
		}

		printf("%s �л��� ������ %d �Դϴ�.\n", pscores->name, pranks[i]);
	}
}

int main() {
	/*�л� �� �Է¹޴� �ڵ� ���*/
	int num;
	printf("�л� ���� �Է��ϼ���: ");
	scanf_s("%d", &num);
	
	StudentInfo * students = (StudentInfo *)malloc(num * (sizeof(StudentInfo)));  //����ü �����ͷ� �迭 �Ҵ�
	if (students == NULL) {   //�Ҵ� ���� �� ���α׷� ����
		return 1;
	}
	for (int i = 0; i < num; i++) {
		initializeInfo(&students[i]);  //�л� �̸�, ���� �Է� �޴� �Լ� ȣ��
	}

	char ch = getchar(); // ���� �� ����� ���� ���� �ӽ� ���� ����

	char target;  //Ư�� ���� �����ϴ� ����
	printf("Ư�� ���� (A, B, C ,D, F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);
	
	classifyStudents(students, target, num);  //���� �з��ϴ� �Լ� ȣ��

	
	
	int sum = sumScore(students, num);  // ���� �ջ��ϴ� �Լ� ȣ��
	double average = averageScores(students, num);  // ���� ��� ���� �Լ� ȣ��
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %.1lf�Դϴ�.\n", sum, average);

	printRanks(students, num);  // �л� ���� �ű�� �Լ� ȣ��

	return 0;

	free(students);  //�Ҵ� �� �޸� ����
}
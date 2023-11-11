#include <stdio.h>
#define STUDENTS 5 
#define SUBJECTS 3
#define CHARNUM 20

/*�л� �� ��� ���� ��� �Լ�*/
void printStudentResults(double var1[][SUBJECTS], char var2[][CHARNUM]) {
//2���� �迭�� �Ű������� �ϴ� �Լ�
	for (int i = 0; i < STUDENTS; i++) {
		double sum = 0;
		for (int j = 0; j < SUBJECTS; j++) {

			sum += var1[i][j];   //������� ���� ��
		}
		double average = sum / SUBJECTS;  //�л��� ���
		printf("\t%s�� ��� ����: %.2lf\n", var2[i], average);

	}
}

/*���� �� ��� ���� ��� �Լ�*/
void printSubjectResults(double var1[][SUBJECTS], char var3[][CHARNUM]) {
	for (int i = 0; i < SUBJECTS; i++) {
		double sum = 0;
		for (int j = 0; j < STUDENTS; j++) {
			sum += var1[j][i];  // �л����� ���� ��
		}
		double average = sum / STUDENTS;  //������ ���
		printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", var3[i], average);
	}
}

int main() {
	char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
	char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ����� �迭
	double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �л��� ���� �� ������ ������ ����� �迭
	printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
	// �л� �̸��� �Է¹޴� �ڵ� ���
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%d��° �л��� �̸��� �Է��ϼ���: ", i + 1);
		scanf_s("%s", studentNames[i], sizeof(studentNames[i]));
	}



	// �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
	printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
	printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);


	// �л����� ���� �� ������ �Է¹޴� �ڵ� ���
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%s�� ����: ", studentNames[i]);
		scanf_s("%lf %lf %lf", &studentScores[i][0], &studentScores[i][1], &studentScores[i][2]);
		
	}

	printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
	printf("--------------------\n");
	printf("�л� �� ������ ������ �����ϴ� \n");


	// �л� �� ��� ������ ����ϴ� �ڵ� ���
	printStudentResults(studentScores, studentNames);


	printf("--------------------\n");
	printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");

	// ���� �� ��� ������ ����ϴ� �ڵ� ���
	printSubjectResults(studentScores, subjectNames);

	printf("���α׷��� �����մϴ�. ");
	return 0;
}
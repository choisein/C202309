#include<stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();
int getSum(int numArray[], int length);
double getAverage(int numArray[], int length);
void printFamousCity(double dayArray[], int length);

int main() {
	//����ڷκ��� ���� �̸� �Է¹ޱ�
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	//����ڷκ��� ��� �̸� �ޱ�
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	//�Լ� ȣ��
	calculateTravelDays();

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	//�� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	//�� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� �� : %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays, NUMCITY);
}

int getSum(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	return totalDays;
}

double getAverage(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	double averageDays = (double)totalDays / length;
	return averageDays;
}

void printFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayIndex = 0;
	for (int i = 0; i < length; i++) {
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[i];
			maxDayIndex = i;
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s �Դϴ�. (��ոӹ���: %.2f)\n", cities[maxDayIndex], maxDay);
}

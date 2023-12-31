#include <stdio.h>
#define STUDENTS 5

//학생 성적 분류 함수
void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");
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
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
		}
	}
}

//성적 합산하는 함수
int sumScore(int scores[]) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++)
	{
		sum += scores[i];
	}
	return sum;
}

// 성적 평균값 내는 함수
double averageScores(int scores[]) {
	double average;
	int sum = sumScore(scores);
	average = (double)sum / (double)STUDENTS;
	return average;
}

//학생 순위 매기는 함수
/*학생 i의 순위를 1위로 놓고 다른 학생과 비교하며 점수가 작을 때마다 ranks +1*/
void printRanks(int scores[]) {
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1;
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[j] > scores[i]) {
				ranks[i]++;
			}
		}
		printf("%d 학생의 순위는 %d 입니다.\n", i+1, ranks[i]);
	}
}

int main() {
	int scores[STUDENTS];  //학생들의 성적을 저장하는 배열

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); // 엔터 값 지우기 위한 버퍼 임시 저장 변수

	char target;  //특정 점수 저장하는 변수
	printf("특정 점수 (A, B, C ,D, F)를 입력하시오: ");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);  //성적 분류하는 함수 호출

	int sum = sumScore(scores);  // 성적 합산하는 함수 호출
	double average = averageScores(scores);  // 성적 평균 내는 함수 호출
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);

	printRanks(scores);  // 학생 순위 매기는 함수 호출

	return 0;
}
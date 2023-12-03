#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/*성적과 이름을 가지는 구조체 선언*/
struct Student {
	int scores;
	char name[20];
};                
typedef struct Student StudentInfo;

/*구조체 초기화 함수*/
void initializeInfo(StudentInfo* ps) {
	printf("학생 이름을 입력하세요: ");
	char temp[100];
	scanf_s("%s", temp, (int)sizeof(temp));
	strcpy_s(ps->name, strlen(temp) + 1, temp);  //temp 변수에 입력받은 후 name에 복사
	printf("%s의 점수를 입력하세요: ", ps->name);
	scanf_s("%d", &ps->scores);

}
/*학생 성적 분류 함수*/
void classifyStudents(StudentInfo *pscores, char targetGrade, int studentnum) {
	printf("학생 성적 분류:\n");
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
			printf("%s 학생은 %c 점수를 받았습니다.\n", pscores[i].name, grade);
		}
	}
	
}

/*성적 합산하는 함수*/
int sumScore(StudentInfo * pscores, int studentnum) {
	int sum = 0;
	for (int i = 0; i < studentnum; i++) {
		sum += pscores[i].scores;

	}
	
	return sum;
}

/* 성적 평균값 내는 함수*/
double averageScores(StudentInfo * pscores, int studentnum) {
	double average;
	int sum = sumScore(pscores, studentnum);
	average = (double)sum / (double)studentnum;
	return average;
}

/*학생 순위 매기는 함수*/
/*학생 i의 순위를 1위로 놓고 다른 학생과 비교하며 점수가 작을 때마다 ranks +1*/
void printRanks(StudentInfo * pscores, int studentnum) {
	int ranks[100];
	int* pranks = ranks;  //ranks를 가리키는 포인터 선언

	for (int i = 0; i < studentnum; i++) {
		pranks[i] = 1;
		for (int j = 0; j < studentnum; j++) {
			if (pscores[i].scores < pscores[j].scores) {
				pranks[i]++;
			}
		}

		printf("%s 학생의 순위는 %d 입니다.\n", pscores->name, pranks[i]);
	}
}

int main() {
	/*학생 수 입력받는 코드 블록*/
	int num;
	printf("학생 수를 입력하세요: ");
	scanf_s("%d", &num);
	
	StudentInfo * students = (StudentInfo *)malloc(num * (sizeof(StudentInfo)));  //구조체 포인터로 배열 할당
	if (students == NULL) {   //할당 실패 시 프로그램 종료
		return 1;
	}
	for (int i = 0; i < num; i++) {
		initializeInfo(&students[i]);  //학생 이름, 성적 입력 받는 함수 호출
	}

	char ch = getchar(); // 엔터 값 지우기 위한 버퍼 임시 저장 변수

	char target;  //특정 점수 저장하는 변수
	printf("특정 점수 (A, B, C ,D, F)를 입력하시오: ");
	scanf_s("%c", &target, 1);
	
	classifyStudents(students, target, num);  //성적 분류하는 함수 호출

	
	
	int sum = sumScore(students, num);  // 성적 합산하는 함수 호출
	double average = averageScores(students, num);  // 성적 평균 내는 함수 호출
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %.1lf입니다.\n", sum, average);

	printRanks(students, num);  // 학생 순위 매기는 함수 호출

	return 0;

	free(students);  //할당 된 메모리 해제
}
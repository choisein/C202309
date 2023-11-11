#include <stdio.h>
#define STUDENTS 5 
#define SUBJECTS 3
#define CHARNUM 20

/*학생 별 평균 점수 출력 함수*/
void printStudentResults(double var1[][SUBJECTS], char var2[][CHARNUM]) {
//2차원 배열을 매개변수로 하는 함수
	for (int i = 0; i < STUDENTS; i++) {
		double sum = 0;
		for (int j = 0; j < SUBJECTS; j++) {

			sum += var1[i][j];   //과목들의 점수 합
		}
		double average = sum / SUBJECTS;  //학생의 평균
		printf("\t%s의 평균 점수: %.2lf\n", var2[i], average);

	}
}

/*시험 별 평균 점수 출력 함수*/
void printSubjectResults(double var1[][SUBJECTS], char var3[][CHARNUM]) {
	for (int i = 0; i < SUBJECTS; i++) {
		double sum = 0;
		for (int j = 0; j < STUDENTS; j++) {
			sum += var1[j][i];  // 학생들의 점수 합
		}
		double average = sum / STUDENTS;  //과목의 평균
		printf("\t%s의 평균 점수는 %.2lf 입니다.\n", var3[i], average);
	}
}

int main() {
	char subjectNames[SUBJECTS][CHARNUM] = { "퀴즈", "중간고사", "기말고사" };
	char studentNames[STUDENTS][CHARNUM] = { "" }; // 학생 이름이 저장될 배열
	double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // 학생의 시험 별 성적이 점수가 저장될 배열
	printf("학생 %d명의 이름의 입력을 시작합니다. \n", STUDENTS);
	// 학생 이름을 입력받는 코드 블록
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%d번째 학생의 이름을 입력하세요: ", i + 1);
		scanf_s("%s", studentNames[i], sizeof(studentNames[i]));
	}



	// 입력된 학생 이름이 잘 저장되었는지 확인하는 코드 블록
	printf("학생 이름이 모두 입력되었습니다. \n");
	printf("입력된 학생 이름은 다음과 같습니다. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("각 학생의 %s, %s, %s 점수를 차례대로 입력해주세요. (띄어쓰기 구분)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);


	// 학생들의 시험 별 점수를 입력받는 코드 블록
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%s의 성적: ", studentNames[i]);
		scanf_s("%lf %lf %lf", &studentScores[i][0], &studentScores[i][1], &studentScores[i][2]);
		
	}

	printf("학생들의 시험 점수가 모두 입력 되었습니다.\n");
	printf("--------------------\n");
	printf("학생 별 성적은 다음과 같습니다 \n");


	// 학생 별 평균 점수를 출력하는 코드 블록
	printStudentResults(studentScores, studentNames);


	printf("--------------------\n");
	printf("과목 별 평균 점수는 아래와 같습니다. \n");

	// 과목 별 평균 점수를 출력하는 코드 블록
	printSubjectResults(studentScores, subjectNames);

	printf("프로그램을 종료합니다. ");
	return 0;
}
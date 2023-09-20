#include <stdio.h>

int main()
{
	int choice;

	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice);

	if (choice == 1)  // 조건식: 1입력시
	{
		printf("파일을 저장합니다.");  //"파일을 저장합니다." 출력
	}
	else if (choice == 2)
	{
		printf("저장 없이 닫습니다.");
	}
	else if (choice == 3)
	{
		printf("종료합니다.");
	}
	else //조건식: 1,2,3 외의 숫자 입력시
	{
		printf("잘못 입력하셨습니다.");  //"잘못 입력하셨습니다." 출력
	}

	return 0;
}
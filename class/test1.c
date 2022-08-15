// 1
#include <stdio.h>

int main(){
	int myGrade = 1;
	char myMajor[] = "HD";
	
	printf("나의 학년 : %d\n", myGrade);
	printf("나의 전공 : %s", myMajor);
	
	return 0; // 함수를 안전하게 종료하기 위해. 단, 필수는 아님.
}
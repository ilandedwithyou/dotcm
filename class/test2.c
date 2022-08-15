#include <stdio.h>

int main(){
	int myGrade;
	char myMajor[3];
	
	printf("나의 학년은 ? ");
	scanf("%d", &myGrade);
	
	printf("나의 전공은 ? ");
	scanf("%s", myMajor);
	
	printf("나는 %s과 %d 학년입니다.", myMajor, myGrade);
}
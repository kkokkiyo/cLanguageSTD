#include<stdio.h>
#include<stdlib.h>

/*구조체 정의*/

struct student{
	char name[20];
	int kor;
	int math;
	float avg;
};

void main(void){
	struct student *stu; // 동적변수를 위한 포인터 변수 정의
	stu = (struct student *) malloc(sizeof(struct student)); //동적변수 생성
	//동적변수 *stu(즉, stu->name, stu->kor, stu->math, stu->avg)의 사용
	strcpy(stu->name, "Lee D.C.");  //stu가 포인터로 정의되어 있어서 -> 로 접근해야 된다. 
	stu->kor = 92;
	stu->math = 88;
	stu->avg = (stu->kor + stu->math)/2.0;
	printf("이름 : %s\n", stu->name);
	printf("총점 : %3d\n", stu->kor + stu->math);
	printf("평균 : %6.2f\n", stu->avg);
	
	free(stu);
}
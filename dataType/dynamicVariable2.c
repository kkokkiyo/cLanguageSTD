#include<stdio.h>
#include<stdlib.h>

struct node{
	int num;
	struct node *next;
};

int main(void){
	struct node *temp, *list;
	int number;
	list = NULL;

	printf("정수 입력 : ");  //정수 입력
	while(scanf("%d", &number)!=EOF){
		temp = (struct node*) malloc(sizeof(struct node)); //동적변수 생성
		temp->num = number;
		temp->next = list;
		list = temp;
		
	}
	
	printf("입력정수의 역순 출력 : "); //입력 정수의 역순 출력
	while(list != NULL){
		printf("%d", list->num);
		temp=list;
		list=temp->next;
		free(temp);  //동적변수 소멸
	}
}
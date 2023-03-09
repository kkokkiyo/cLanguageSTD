#include<stdio.h>

struct carInfo{
	int number;
	char carType[10];
	char manufacture[20];
	int madeYear;
	int cc;
};


void main(viod){
	struct carInfo mycar;
	
	readCar(&mycar);
	
	showCar(mycar);
}

void showCar(struct carInfo car){
	printf("========================================================\n");
	printf("차랑번호 ? : %d\n",  car.number);
	printf("차량유형 ? : %s\n", car.carType);
	printf("제작회사 ? : %s\n", car.manufacture);
	printf("제작년도 ? : %d\n", car.madeYear);
	printf("배기량 ? : %d\n", car.cc);
	
}



void readCar(struct carInfo *car){
	printf("차랑번호 ? : ");
	scanf("%d", &car->number);
	printf("차량유형 ? : ");
	scanf("%s", &car->carType);
	printf("제작회사 ? : ");
	scanf("%s", &car->manufacture);
	printf("제작년도 ? : ");
	scanf("%d", &car->madeYear);
	printf("배기량 ? : ");
	scanf("%d", &car->cc);
	
}



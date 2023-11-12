#include<stdio.h>
#include<math.h>
int main (){
	float thunhap,thue;
	printf("nhap thu nhap:");
	scanf("%f",&thunhap);
	if(thunhap>0&&thunhap<5){
		thue=thunhap*5/100;
	}else if(thunhap>5&&thunhap<=10){
		thue=thunhap*10/100;
	}else if(thunhap>10&&thunhap<=18){
		thue=thunhap*15/100;
	}else if(thunhap>18&&thunhap<=32){
		thue=thunhap*20/100;
	}else if(thunhap>32&&thunhap<=52){
		thue=thunhap*25/100;
	}else if(thunhap>52&&thunhap<=80){
		thue=thunhap*30/100;
	}else if(thunhap>80){
		thue=thunhap*35/100;
	}
	printf("thue phai nop:%.2f\n",thue);
	printf("thu nhap con lai:%.2f",thunhap-thue);
	return 0;
}

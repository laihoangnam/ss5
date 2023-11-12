#include <stdio.h>
int main(){
	float m,s;
	printf("nhap so phut:");
	scanf("%f",&m);
	if(m<=50){
		s=m*600;
	}else if(m<=150&&m>50){
		s=(m-50)*400+600*50;
	}else if(m<=200&&m>150){
		s=(m-150)*200+600*50+400*100;
	}
	printf("so tien phai tra la:%.2f",s+25000);
		
	
}

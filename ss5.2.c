#include<stdio.h>
#include<math.h>
int main(){
	float thunhap,hh;
	printf("thu nhap :");
	scanf("%f",&thunhap);
	if(thunhap<=100000000){
	hh=thunhap/100*5;
	printf("hoa hong la:%.1f",hh);
	}else if(thunhap<=300000000&&thunhap>=100000000){
	hh=thunhap/100*10;
	printf("hoa hong la:%.1f",hh);
    }else if(thunhap>=300000000){
	hh=thunhap/100*20;
	printf("hoa hong la:%.1f",hh);
 }
 return 0;
}

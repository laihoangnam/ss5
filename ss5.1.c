#include<stdio.h>
#include<math.h>
int main (){
	double a,b,c,x1,x2;
	printf("ptrinh bac 2 co dang : ax*x+bx+c\n");
	printf("nhap a:");
	scanf("%lf",&a);
	printf("nhap b:");
	scanf("%lf",&b);
	printf("nhap c:");
	scanf("%lf",&c);
	if (a==0){
	printf("khong phai ptrinh b2");
	}else {
		double denta=b*b-4*a*c;
		if (denta<0){
			printf("ko co no");
		}else if (denta==0){
			x1=x2=-b/a;
			printf("nghiem kep:x1=x2=%f",x1);
		}else if(denta>0){
			x1=(-b-sqrt(denta))/(a*2);
			x2=(-b+sqrt(denta))/(a*2);
			printf("pt co 2no:\n x1=%f\n",x1);
			printf(" x2=%f",x2);
		}
	}
	return 0;
}

#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=\n");
	scanf("%d",&a);
	printf("Nhap b=\n");
	scanf("%d",&b);
	printf("Nhap c=\n");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a){
		int chuvi=a+b+c;
		float dientich=sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
		printf("Chu vi = %d",chuvi);
		printf("Dien tich = %f",dientich);
	}else{
		printf("Khong phai 3 canh cua tam giac");
	}
}

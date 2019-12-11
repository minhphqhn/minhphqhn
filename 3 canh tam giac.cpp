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
		int cv=a+b+c;
		int s=(float)sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
		printf("Chu vi= %d",cv);
		printf("Dien tich= %f",s);
	}else{
		printf("Khong phai 3 canh cua tam giac");
	}
}

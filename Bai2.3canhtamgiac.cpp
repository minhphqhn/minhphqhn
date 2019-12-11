#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap 3 canh cua tam giac\n");
	do {
	printf("Nhap a:\n");
	scanf("%d", &a);
	printf("Nhap b:\n");
	scanf("%d",&b);
	printf("Nhap c:\n");
	scanf("%d",&c);
	if (a+b<=c||a+c<=b||b+c<=a||a<=0||b<=0||c<=0){
	printf("Day khong phai 3 canh tam giac");
	 }
	}
	while (a+b<=c||a+c<=b||b+c<=a);
	printf("Day la 3 canh tam giac");
	return 0;
}

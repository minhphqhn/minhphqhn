#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap so a=\n");
	scanf("%d",&a);
	printf("Nhap so b=\n");
	scanf("%d",&b);
	printf("Nhap so c=\n");
	scanf("%d",&c);
	if(a<b){
		if(a<c){
			printf("%d min",a);
		}else{
			printf("%d min",c);
		}
	}else{
		if(b<c){
			printf("%d min",b);
		}else{
			printf("%d min",c);
		}
	}
}

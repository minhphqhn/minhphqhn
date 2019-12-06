#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap so a=\n");
	scanf("%d",&a);
	printf("Nhap so b=\n");
	scanf("%d",&b);
	printf("Nhap so c=\n");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("%d max",a);
		}else{
			printf("%d max",c);
		}
	}else{
		if(b>c){
			printf("%d max",b);
		}else{
			printf("%d max",c);
		}
	}
}

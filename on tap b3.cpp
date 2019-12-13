#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n=\n");
	scanf("%d",&n);
	if(n<=0){
		printf("Khong tim thay\n");
	}else if(n<3){
		printf("So thu %d = %d\n",n,1);
	}else if(n<4){
		printf("So thu %d = %d\n",n,2);
	}else{
		int x1=1,x2=1,x3=2;
		for(int i=4;i<=n;++i){
			x1=x2;
			x2=x3;
			x3=x1+x2;
		}
		printf("So thu %d = %d\n",n,x3);
	}
	return 0;
}

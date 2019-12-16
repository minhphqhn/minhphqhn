#include <stdio.h>
int main(){
	int ary[10];
	for(int i=0;i<10;i++){
		printf("Nhap 10 so:\n");
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<10;i++){
		int n=0;
		for(;ary[i]!=0;ary[i]/=10){
			n=n*10+ary[i]%10;
		}
		printf("Nghich dao:%d\n",n);
	}
	return 0;
}

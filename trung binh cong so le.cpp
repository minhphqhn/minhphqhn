#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap cac so \n");
		scanf("%d",&ary[i]);	
	}
	float s;
	float count = 0;
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0){
			count++;
			s+=ary[i];
		}
	}
	printf("Trung binh cac so le : %f",s/count);
	return 0;
}

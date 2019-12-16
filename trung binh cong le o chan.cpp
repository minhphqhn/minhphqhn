#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong so n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so = \n");
		scanf("%d",&ary[i]);
	}
	float s;
	float count=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			if(ary[i]%2!=0){
				count++;
				s+=ary[i];
			}
		}
	}
	printf("Trung binh cac so le o vi tri chan = %f",s/count);
	return 0;
}

#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap ary[%d]=\n",i);
		scanf("%d",&ary[i]);
	}
	int count=0,max_count=0;
	for(int i=0;i<11;i++){
		if(ary[i]>0){
			count++;
			if(count>max_count){
				max_count=count;
			}
		}else{
			count=0;
		}
	}
	printf("max: %d\n",max_count);
	return 0;
}


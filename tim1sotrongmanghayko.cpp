#include <stdio.h>
// 1.
bool timkiem(int x,int a[],unsigned int n){
	for (int i = 0; i < n; ++i)
	{
		if(x == a[i]){
			return true;
		}
	}
	return false;
}
int main(){
	int x= 20,ary[5] = {1,20,3,4,5};
	if(timkiem(x,ary,5)){
		printf("Tim thay trong mang\n");
	}else{
		printf("Khong tim thay\n");
	}
}

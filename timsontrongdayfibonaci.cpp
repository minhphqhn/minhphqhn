#include <stdio.h>
int timsotrongdayfibo(int n){
	if(n<1) return 0;
	if(n<3) return 1;
	if(n==3) return 2;
	int x1=1,x2=1,x3=2;
	for (int i = 4; i <= n; ++i)
	{
		x1= x2;
		x2=x3;
		x3=x1+x2;
	}
	return x3;
}
int main(){
	printf("So thu 12 trong day FIBO: %d\n",timsotrongdayfibo(12));
	return 0;
}

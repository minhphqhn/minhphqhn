#include<stdio.h>
int main(){
	int n,i;
	int S = 1; 
	do {
	  printf("\nhay nhap 1 so nguyen vao : \n");
	  scanf("%d", &n);
	  if (n<1) {
	    printf("\n N phai lon hon hoac bang 1. Vui long nhap lai !");
		}
	}
	while(n<1);
	for (i=1;i<=n;i++)
		{S*=i;}
	 printf("giai thua cua %d: %d" ,n,S) ;
	 	return 0; 
}

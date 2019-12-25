#include <stdio.h>
#include <string.h>
bool check(char a[][100],unsigned int c,char b[]){
	for (int i=0;i<c;i++){
		int x=0,max=0;
		for (int j=0;j<strlen(a[i]);j++){
			if (a[i][j]==b[x]){
				x++;
				if (x>max){
					max=x;
				}
			} else {
				x=0;
			}
		}
		if (max==strlen(b)){
			return true;
		}
	}
	return false;
}

int main (){
	int n;
	printf("Nhap so luong chuoi n:\n");
	scanf("%d",&n);
	char a[n][100];
	for (int i=0;i<n;i++){
		printf("Nhap chuoi thu %d:\n",i+1);
		scanf("%s",a[i]);
	}
	char s[100];
	printf("Nhap chuoi s can kiem tra:\n");
	scanf("%s",s);
	if (check(a,n,s)){
		printf("Chuoi s co nam trong mang");
	} else {
		printf("Chuoi s khong nam trong mang");
	}
	return 0;
}
